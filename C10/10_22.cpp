#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool IsShorter(const string& s, int sz)
{
	return s.size() >= 6;
}

int main()
{
	vector<string> v{ "1234567", "1234", "1234567890", "1234567", "12345" };
	cout << count_if(v.cbegin(), v.cend(), bind(IsShorter, _1, 6));
	return 0;
}