// iterator_py.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> text;
	text.push_back("llll loooooov vvvve eeee");
//	text.push_back(" ");
	text.push_back("ccc");
	for (auto it = text.begin(); it != text.end()&& !it->empty(); it++)
	{
		for (auto &c : *it)
			if (isalpha(c))
				c = toupper(c);
//		for (auto &c : *it)
//			if (isalpha(c)) c = toupper(c);
	}
	for (auto c : text)
		cout << c << endl;
    return 0;
}

