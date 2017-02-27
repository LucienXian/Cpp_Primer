// String_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using std::string;
using namespace std;

int main()
{
	string s, temp;
//	cin >> s;
	while (cin >> temp)
	{
//		s += ' ' + temp;
		s += temp + ' ';
		cout << s << endl;
	}
	return 0;
}

