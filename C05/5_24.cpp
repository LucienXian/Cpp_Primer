// func.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int call_count(int i)//形参
{
	static size_t n=10; //局部静态变量
	return n+=i;
}

int main()
{
	for (int i = 0; i < 10; i++)//局部变量
	{
		cout << call_count(i) << endl;
	}
	
    return 0;
}

