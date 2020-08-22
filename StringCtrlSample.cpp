// StringCtrlSample.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "MyString.h"


int main()
{
	CMyString strData;
	strData.SetString("Hello");
	cout << strData.GetString() << endl;
	strData.SetString("World");
	cout << strData.GetString() << endl;

    return 0;
}

