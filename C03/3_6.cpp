// String_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using std::string;
using namespace std;

int main()
{
	string s("string");
	for (auto &c : s)
		c = 'X';
	cout << s << endl;
	return 0;
}

