// iterator_py.cpp : 定义控制台应用程序的入口点。
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

