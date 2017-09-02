// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"  
#include <iostream>
#include <memory>
#include <string>

using std::string;
using std::cout;

int main()
{
	unsigned l = strlen("hello " "world") + 1;
	char *new_str = new char[l]();
	strcat_s(new_str, l ,"hello ");
	strcat_s(new_str, l, "world");
	cout << new_str << std::endl;
	delete[]new_str;
}