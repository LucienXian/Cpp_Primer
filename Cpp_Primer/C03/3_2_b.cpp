// String_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using std::string;
using namespace std;

int main()
{
	string s1;
	while (cin>>s1)
	{
		cout << "each word: " << s1 << endl;
	}
	return 0;
}

