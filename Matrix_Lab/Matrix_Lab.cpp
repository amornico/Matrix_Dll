// Matrix_Lab.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"

//#include <iostream>
//#include <string>
#include "Matrix_Lab.h"
//using namespace std;
//
//MATRIX_LAB_API int nMatrix_Lab=0;
EXTERN_C MATRIX_LAB_API bool GetStr(char *p);
EXTERN_C MATRIX_LAB_API bool GetFolder(char *p);
// ���ǵ���������һ��ʾ����
/*
MATRIX_LAB_API int fnMatrix_Lab(void)
{
	return 42;
}
*/
MATRIX_LAB_API bool GetStr(char *p)
{
	//p = 201702;
	//p = "2017-02-15 23:59:59";
	//return "2017-02-15 23:59:59";
	char *str = "2030-12-15 23:59:59";
	(void)strcpy(p, str);
		return true;
	
}

MATRIX_LAB_API bool GetFolder(char *p)
{
	//p = 201702;
	//p = "2017-02-15 23:59:59";
	//return "2017-02-15 23:59:59";
	char *str1 = "Lab7";
	(void)strcpy(p, str1);
	return true;

}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Matrix_Lab.h
CMatrix_Lab::CMatrix_Lab()
{
	return;
}
