// func.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int compare(int a, const int* b) 
{
	return (a > *b) ? a : *b;
}

int main()
{
	int x = 10, a = 11;
	int *y = &a;
	cout << compare(x, y) << endl;
	return 0;
}

