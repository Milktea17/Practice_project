#include "stdafx.h"
#include "MyString.h"
#include <string>

CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
}


int CMyString::SetString(const char* pszParam)
{
	Release();

	int nLength;

	nLength = strlen(pszParam);

	m_pszData = new char[nLength+1];

	if (nLength == 0)
		cout << "길이가 0입니다" << endl;

	if (pszParam == NULL)
		cout << "문자열이 비어있습니다" << endl;

	strcpy_s(m_pszData,sizeof(char) * (nLength+1), pszParam);
	m_nLength = nLength;

	return nLength;
}


const char* CMyString::GetString() const
{
	return m_pszData;
}


void CMyString::Release()
{
	delete[] m_pszData;

	m_pszData = NULL;
	m_nLength = 0;
	
}
