// String_test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>

using std::string;
using namespace std;

int main()
{
	string s1;
	while (getline(cin, s1))
	{
		cout << "each line: " << s1 << endl;
	}
}

