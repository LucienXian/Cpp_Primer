// func.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void change(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int x=2, y=3;
	change(&x, &y);
	cout << "x = " <<x << "\ny = " << y << endl;
	return 0;
}

