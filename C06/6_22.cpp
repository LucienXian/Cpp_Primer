// func.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void swap(int*& x, int*& y) 
{
	auto temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 10, b = 11;
	int* x = &a;
	int* y = &b;
	swap(x, y);//����ʹ��swap(&a, &b);
	return 0;
}

