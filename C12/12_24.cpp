// ch12_strblob.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"  
#include <iostream>
#include <memory>
#include <string>

using std::string;
using std::cout; using std::cin;

int main()
{
	cout << "How long do you want the string? ";
	int size{ 0 };
	cin >> size;
	char *input = new char[size + 1];
	cin.ignore();
	cout << "input the string: ";
	cin.get(input, size + 1);
	cout << input << std::endl;
	delete[]input;
}