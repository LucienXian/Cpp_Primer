// String_test.cpp : �������̨Ӧ�ó������ڵ㡣
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

