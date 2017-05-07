#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> v{ "1234", "123456", "1234567", "1234567", "1234567", "1234567" };
	auto a = count_if(v.cbegin(), v.cend(),
		[](const string& s) {return s.size() > 6; });
	cout << a << endl;

	return 0;
}