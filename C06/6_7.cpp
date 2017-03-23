// func.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

size_t call_count()
{
	static size_t i;
	return i++;
}

int main()
{
	cout << call_count() << endl;
	cout << call_count() << endl;
	cout << call_count() << endl;
    return 0;
}

