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
	if (s1 == s2)
	{
		cout << "the same string: " << s1 << endl;
	}
	else
	{
		cout << "the larger string: " << (s1 > s2 ? s1 : s2) << endl;
	}
}

