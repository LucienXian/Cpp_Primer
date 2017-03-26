// func.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool Is_Upper(const string& s)
{
	for (auto c : s) {
		if (isupper(c)) return true;
	}
	return false;
}

void Tolower(string& s)
{
	for (auto &c : s)
		c = tolower(c);
}

int main()
{
	string s("ewdsS");
	cout << Is_Upper(s) << endl;
//	cout << "x = " <<x << "\ny = " << y << endl;
	Tolower(s);
	cout << s << endl;
	return 0;
}

