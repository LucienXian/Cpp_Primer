// String_test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>

using std::string;
using namespace std;

int main()
{
	string s("say, hello, world!!");
	string result;
	for (auto c : s)
		if (!ispunct(c))
			result += c;
	cout << result << endl;
	return 0;
}

