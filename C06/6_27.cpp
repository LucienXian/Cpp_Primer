// func.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
#include <initializer_list>

using namespace std;

int count_sum(initializer_list<int> a)
{
	int sum = 0;
	for (auto i = a.begin(); i != a.end(); i++)
	{
		sum += *i;
	}
	return sum;
}

int main(int argc, char *argv[])
{
	cout << count_sum({ 1,2,3,4 }) << endl;
	return 0;
}

