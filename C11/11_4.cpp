// guanlian.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string w;
	map<string, size_t> word;
//	int i = 0;
	while (cin>>w)
	{
		for (auto &c : w)
			c = tolower(c);
		w.erase(remove_if(w.begin(), w.end(), ispunct), w.end());
		++word[w];
//		if (i++ == 1) break;
	}
	for (auto& e : word)
		cout << e.first << " " << e.second << endl;
    return 0;
}

