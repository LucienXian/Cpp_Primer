// String_test.cpp : 定义控制台应用程序的入口点。
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

