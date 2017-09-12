// ch12_strblob.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


template <typename T>
int compare(const T& lhs, const T& rhs) 
{
	if (lhs < rhs) return -1;
	else if (lhs > rhs) return 1;
	else return 0;
}

int main()
{
	string a("123");
	string b("asd");
	cout << compare(a, b) << endl;
}
