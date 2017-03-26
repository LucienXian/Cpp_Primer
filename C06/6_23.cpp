// func.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void print(const int* beg, const int* end)
{
	while (beg != end)
		cout << *beg++ << endl;
}

int main()
{
	int a[2] = { 0,1 };
	print(begin(a), end(a));
	return 0;
}

