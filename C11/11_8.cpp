// guanlian.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> exclude = { "aa", "bb", "cc", "dd", "ee", "ff" };
	for (string word; cout << "Enter: ", cin >> word;)
	{
		auto is_repe = binary_search(exclude.cbegin(), exclude.cend(), word);
		auto reply = is_repe ? "excluded" : "not excluded";
		cout << reply << endl;
	}
    return 0;
}

