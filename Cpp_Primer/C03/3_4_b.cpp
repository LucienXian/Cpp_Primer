// String_test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>

using std::string;
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	if (s1.size() == s2.size())
	{
		cout << "the same string" << endl;
	}
	else
	{
		cout << "the longer string: " << (s1.size() > s2.size() ? s1 : s2) << endl;
	}
}

