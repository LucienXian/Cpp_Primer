// IOuse.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

istream& func(istream &is)
{
	string buf;
	while (is >> buf)
		cout << buf << endl;
	is.clear();
	return is;
}

int main()
{
	istream& i = func(cin);
	cout << i.rdstate() << endl;
	return 0;
}

