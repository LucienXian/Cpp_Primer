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
	multimap<string, string> authors{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };
	auto it = authors.find("alan");
	if (it != authors.end())
		authors.erase("alan");
	for (const auto &author : authors)
		std::cout << author.first << " " << author.second << std::endl;
    return 0;
}

