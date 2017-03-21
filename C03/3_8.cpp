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
	decltype(s.size()) count = 0;
/*	while (count < s.size())
	{
		s[count++] = 'X';
	}
	cout << s << endl;
*/
	for (count = 0; count < s.size(); count++)
	{
		s[count] = 'X';
	}
	cout << s << endl;
	return 0;
}

