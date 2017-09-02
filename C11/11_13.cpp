// guanlian.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
	vector<pair<string, int>> v;
	string str("123");
	int i(0);
	v.push_back(make_pair(str, i));
	v.push_back({ str,i });
	v.push_back(pair<string, int>(str, i));
    return 0;
}

