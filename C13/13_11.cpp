// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"  
#include <iostream>
#include <memory>
#include <string>

using std::string;
using std::cout; using std::cin;

class HasPtr {
public:
	HasPtr(const HasPtr& p):ps(new string(*p.ps)){}
	HasPtr(const string &s = string()):ps(new string(s)){}
	HasPtr& HasPtr::operator=(const HasPtr &rhs) {
		if (this != &rhs) {
			string *temp_ps = new string(*rhs.ps);
			delete ps;
			ps = temp_ps;
		}
		return *this;
	}
	~HasPtr() { delete ps; }
private:
	string *ps;
};

int main()
{
	HasPtr p1("MyP1");
	HasPtr p2(p1);
	HasPtr p3 = p1;
	//cout << *p2.ps;
}