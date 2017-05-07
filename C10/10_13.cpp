#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool is_shorter(const string& s1)
{
	if (s1.size() < 5) return true;
	else return false;
}

int main()
{
	vector<string> v{ "12dasd","dsadsaq","sds" };
	auto it = partition(v.begin(), v.end(),is_shorter);
	for (; it != v.cend(); it++)
		cout << *it << " ";
	return 0;
}