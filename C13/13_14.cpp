// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"  
#include <iostream>
#include <memory>
#include <string>
#include <vector>

using std::string;
using std::cout; using std::cin;

class numbered {
public:
	numbered() { mysn = unique++; }
	int mysn;
	static int unique;
};

int numbered::unique = 10;

void f(numbered s)
{
	std::cout << s.mysn << std::endl;
}

int main()
{
	numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
}