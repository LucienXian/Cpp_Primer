// vector_pr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	string word;
	vector<int> v0;
	vector<string> v1;
//	while (cin >> i)
//	{
//		v0.push_back(i);
//	}
	while (cin >> word)
	{
		v1.push_back(word);
	}
    return 0;
}

