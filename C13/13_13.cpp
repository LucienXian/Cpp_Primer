// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"  
#include <iostream>
#include <memory>
#include <string>
#include <vector>

using std::string;
using std::cout; using std::cin;

class X {
public:
	X() { cout << "X()" << std::endl; }
	X(const X&) { cout << "X(const X&)" << std::endl; }
	X& operator=(const X&) { cout << "X& operator=(const X&)" << std::endl; return *this; }
	~X() { cout << "~X()" << std::endl; }
};

void f(const X &rx,X x)
{
	std::vector<X> vec;
	vec.reserve(2);
	vec.push_back(rx);
	vec.push_back(x);
}

int main()
{
	X *px = new X;
	f(*px, *px);
	delete px;
	//cout << *p2.ps;
}