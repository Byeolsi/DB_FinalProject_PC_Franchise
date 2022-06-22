#pragma once
// sprintf() 함수를 쓸 때, 생기는 에러를 막기 위해서 사용.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include <sql.h>
#include <sqlext.h>
#include <string>

using namespace std;
using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;

class ProcessQuery
{
private:
	// hEnv 는 환경설정에 대한 핸들 값을 저장하는 변수.
	SQLHENV hEnv = NULL;

private:
	// hDbc 는 연결설정에 대한 핸들 값을 저장하는 변수.
	/*
	* hDbc 핸들은 hEnv 를 필요로 하며,
	* 뒤에 나올 hStmt 는 hDbc 를 필요로 하기 때문에
	* 순서에 핸들 값을 할당해주어야 함.
	*/
	SQLHDBC hDbc = NULL;

public:
	ProcessQuery()
	{

	}

public:
	bool DBConnect()
	{
		SQLRETURN Ret;

		// SQLAllocHandle() hEnv 에 환경설정에 대한 핸들을 할당.
		/*
		* SQLAllocHandle() 함수의 첫번째 인자는 핸들의 타입을 설정.
		* 두번째 인자는 입력에 사용된 핸들 값을 의미.
		* 값을 입력받을 핸들 값을 의미.
		*/
		if (SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv) != SQL_SUCCESS)
		{
			// 이 함수가 실패하면, false 를 return.
			return false;
			// 성공적으로 수행되면, 다음 if 문으로 넘어감.
		}

		// SQLSetEnvAttr() SQL 의 환경변수를 설정.
		/*
		* SQLSetEnvAttr() 함수의 첫번째 인자는 환경 핸들의 ID.
		* 두번째 인자는 속성 값.
		* 세번째 인자는 ODBC 의 버전 및 속성.
		* 네번째 인자는 세번째 인자의 크기.
		* 이 과정을 통해 hEnv 환경 변수를 설정.
		*/
		if (SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, SQL_IS_INTEGER) != SQL_SUCCESS)
		{
			return false;
		}

		// hDbc 변수에 connection 핸들을 할당.
		if (SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc) != SQL_SUCCESS)
		{
			return false;
		}

		// SQLConnect() 함수를 통해 내가 만든 ODBC 이름과 아이디, 패스워드를 입력하여 SQL 서버와 연결.
		/*
		* SQLConnect() 함수의 첫번째 인자는 연결 핸들의 ID.
		* 두번째 인자는 서버 이름.
		* 세번째 인자는 두번째 인자의 크기.
		* 네번째 인자는 접속 ID.
		* 다섯번째 인자는 네번째 인자의 크기.
		* 여섯번째 인자는 패스워드.
		* 일곱번째 인자는 여섯번째 인자의 크기.
		*/
		Ret = SQLConnect(hDbc, (SQLCHAR*)"DB01_Server", SQL_NTS, (SQLCHAR*)"KIM", SQL_NTS, (SQLCHAR*)"1234", SQL_NTS);

		if ((Ret != SQL_SUCCESS) && (Ret != SQL_SUCCESS_WITH_INFO))
		{
			return false;
		}

		return true;
	}

public:
	void DBDisconnect()
	{
		SQLDisconnect(hDbc);					// SQL 서버와의 연결을 끊음.
		SQLFreeHandle(SQL_HANDLE_DBC, hDbc);	// 할당된 핸들 hDbc 와 hEnv 를 순서에 맞게 해제함.
		SQLFreeHandle(SQL_HANDLE_ENV, hEnv);
	}

public:
	SQLHENV gethEnv()
	{
		return hEnv;
	}

public:
	SQLHDBC gethDbc()
	{
		return hDbc;
	}

public:
	int SchemaCheck(char *table, string *name, short *len, short *type, unsigned int *size, short *isNullable)
	{
		if (DBConnect() == true) {
			printf("Connection Success!!\n");
			static SQLCHAR query[100];
			SQLHSTMT hStmt;
			SQLRETURN retcode;

			// - column 에 대한 정보를 저장할 변수들
			SQLCHAR ColumnName[30][30];			// column 의 이름
			SQLSMALLINT ColumnNameLen[30];		// column 의 이름의 크기
			SQLSMALLINT ColumnDataType[30];		// column 의 데이터 타입(char, int)
			SQLULEN ColumnDataSize[30];			// column 의 데이터 사이즈
			SQLSMALLINT ColumnDataDigits[30];	// ...
			SQLSMALLINT ColumnDataNullable[30];
			// -

			SQLSMALLINT numCols = -1;

			if (SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt) == SQL_SUCCESS) {
				// SELECT 쿼리문
				sprintf((char*)query, "SELECT * FROM %s", table);
				printf("SELECT * FROM %s", table);
				// 반환 값을 받음.
				retcode = SQLExecDirect(hStmt, query, SQL_NTS);

				if (retcode == SQL_ERROR || retcode == SQL_NO_DATA_FOUND) {
					printf("Query Execute Error\n");
				}

				// 쿼리문의 실행 결과로 가져올 column 의 개수를 numCols 변수에 받음.
				SQLNumResultCols(hStmt, &numCols);
				// column 의 개수만큼 반복.
				for (int i = 0; i < numCols; i++) {
					// SQLDescribeCol() 함수를 통해, column 의 정보를 변수에 받음.
					SQLDescribeCol(
						hStmt,
						i + 1,
						ColumnName[i],
						30,
						&ColumnNameLen[i],
						&ColumnDataType[i],
						&ColumnDataSize[i],
						&ColumnDataDigits[i],
						&ColumnDataNullable[i]);

					// column 의 정보를 출력.
					name[i] = ((const char*)ColumnName[i]);
					len[i] = ColumnNameLen[i];
					type[i] = ColumnDataType[i];
					size[i] = ColumnDataSize[i];
					isNullable[i] = ColumnDataNullable[i];
					printf("\nColumn : %d\n", i + 1);
					printf("Column Name : %s\n Column Name Len : %d\n SQL Data Type : %d\n Data Size : %d\n",
						ColumnName[i], (int)ColumnNameLen[i], (int)ColumnDataType[i], (int)ColumnDataSize[i]);
				}

				SQLCloseCursor(hStmt);
				SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
			}
			DBDisconnect();

			return numCols;
		}
		else {
			printf("Fail to Connect!!\n");
		}
	}

public:
	void CustomQuery(DataGridView^ Custom_dataGridView, string strQuery)
	{
		Custom_dataGridView->Rows->Clear();
		Custom_dataGridView->Columns->Clear();
		Custom_dataGridView->Refresh();

		if (DBConnect() == true) {
			printf("Connection Success!!\n");
			static SQLCHAR query[100];
			SQLHSTMT hStmt;
			SQLRETURN retcode;

			// - column 에 대한 정보를 저장할 변수들
			SQLCHAR ColumnName[30][30];			// column 의 이름
			SQLSMALLINT ColumnNameLen[30];		// column 의 이름의 크기
			SQLSMALLINT ColumnDataType[30];		// column 의 데이터 타입(char, int)
			SQLULEN ColumnDataSize[30];			// column 의 데이터 사이즈
			SQLSMALLINT ColumnDataDigits[30];	// ...
			SQLSMALLINT ColumnDataNullable[30];
			// -

			SQLSMALLINT numCols = -1;

			char char_query[100];

			string strData;
			string* attName;
			String^ StrColumnName;
			String^ StrData;

			SQLCHAR columnData[20][20];
			SQLLEN nulldata[20];

			strcpy((char*)query, strQuery.c_str());

			if (SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt) == SQL_SUCCESS) {
				// SELECT 쿼리문
				sprintf((char*)query, "%s", query);
				// 반환 값을 받음.
				retcode = SQLExecDirect(hStmt, query, SQL_NTS);

				if (retcode == SQL_ERROR || retcode == SQL_NO_DATA_FOUND) {
					printf("Query Execute Error\n");
				}
				// 쿼리문의 실행 결과로 가져올 column 의 개수를 numCols 변수에 받음.
				SQLNumResultCols(hStmt, &numCols);
				if (numCols > 0)
				{
					attName = new string[numCols];
					// column 의 개수만큼 반복.
					for (int i = 0; i < numCols; i++) {
						// SQLDescribeCol() 함수를 통해, column 의 정보를 변수에 받음.
						SQLDescribeCol(
							hStmt,
							i + 1,
							ColumnName[i],
							30,
							&ColumnNameLen[i],
							&ColumnDataType[i],
							&ColumnDataSize[i],
							&ColumnDataDigits[i],
							&ColumnDataNullable[i]);

						// column 의 정보를 출력.
						attName[i] = ((const char*)ColumnName[i]);
						printf("\nColumn : %d\n", i + 1);
						printf("Column Name : %s\n Column Name Len : %d\n SQL Data Type : %d\n Data Size : %d\n",
							ColumnName[i], (int)ColumnNameLen[i], (int)ColumnDataType[i], (int)ColumnDataSize[i]);
					}

					Custom_dataGridView->ColumnCount = numCols;
					for (int i = 0; i < numCols; i++)
					{
						StrColumnName = gcnew String(attName[i].c_str());
						Custom_dataGridView->Columns[i]->Name = StrColumnName;
					}

					for (int i = 0; i < numCols; i++)
					{
						SQLBindCol(hStmt, i + 1, SQL_C_CHAR, columnData[i], 20, &nulldata[i]);
					}

					int j = 0;
					while (SQLFetch(hStmt) != SQL_NO_DATA) {
						Custom_dataGridView->Rows->Add();
						for (int i = 0; i < numCols; i++)
						{
							if (nulldata[i] == SQL_NULL_DATA)
								StrData = gcnew String("NULL");
							else
							{
								strData = ((const char*)columnData[i]);
								StrData = gcnew String(strData.c_str());
							}
							Custom_dataGridView->Rows[j]->Cells[i]->Value = StrData;
						}
						j++;
					}

					delete[] attName;
				}

				SQLCloseCursor(hStmt);
				SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
			}
			DBDisconnect();
		}
		else {
			printf("Fail to Connect!!\n");
		}
	}

	void UpdateQuery(string strQuery)
	{
		if (DBConnect() == true) {
			printf("Connection Success!!\n");
			static SQLCHAR query[100];
			SQLHSTMT hStmt;
			SQLRETURN retcode;

			char char_query[100];

			strcpy((char*)query, strQuery.c_str());

			if (SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt) == SQL_SUCCESS) {
				// SELECT 쿼리문
				sprintf((char*)query, "%s", query);
				// 반환 값을 받음.
				retcode = SQLExecDirect(hStmt, query, SQL_NTS);

				if (retcode == SQL_ERROR || retcode == SQL_NO_DATA_FOUND) {
					printf("Query Execute Error\n");
				}

				SQLCloseCursor(hStmt);
				SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
			}
			DBDisconnect();
		}
		else {
			printf("Fail to Connect!!\n");
		}
	}

	void OutputQuery(string* output, string strQuery)
	{
		if (DBConnect() == true) {
			printf("Connection Success!!\n");
			static SQLCHAR query[100];
			SQLHSTMT hStmt;
			SQLRETURN retcode;

			SQLSMALLINT numCols = -1;

			SQLCHAR columnData[20][20];
			SQLLEN nulldata[20];

			string strData;

			char char_query[100];

			strcpy((char*)query, strQuery.c_str());

			if (SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt) == SQL_SUCCESS) {
				// SELECT 쿼리문
				sprintf((char*)query, "%s", query);
				// 반환 값을 받음.
				retcode = SQLExecDirect(hStmt, query, SQL_NTS);

				if (retcode == SQL_ERROR || retcode == SQL_NO_DATA_FOUND) {
					printf("Query Execute Error\n");
				}

				SQLNumResultCols(hStmt, &numCols);
				if (numCols > 0)
				{
					for (int i = 0; i < numCols; i++)
					{
						SQLBindCol(hStmt, i + 1, SQL_C_CHAR, columnData[i], 20, &nulldata[i]);
					}
				}

				int j = 0;
				while (SQLFetch(hStmt) != SQL_NO_DATA) {
					for (int i = 0; i < numCols; i++)
					{
						if (nulldata[i] == SQL_NULL_DATA)
							output[i] = "NULL";
						else
						{
							strData = ((const char*)columnData[i]);
							output[i] = strData;
							printf("%s %d\n", output[i], i);
						}
					}
					j++;
				}

				SQLCloseCursor(hStmt);
				SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
			}
			DBDisconnect();
		}
		else {
			printf("Fail to Connect!!\n");
		}
	}
};