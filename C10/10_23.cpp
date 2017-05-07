#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool check_size(int s, const string& str)
{
	return str.size() < s;
}

int main()
{
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7 };
	string s("12345");
	auto it = find_if(v.cbegin(), v.cend(), bind(check_size, _1, s));
	if (it != v.end()) cout << *it << endl;
	return 0;
}