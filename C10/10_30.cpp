#include "stdafx.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	istream_iterator<int> in(cin), eof;
	while (in != eof)
		v.push_back(*in++);
	sort(v.begin(), v.end());
	copy(v.cbegin(), v.cend(), ostream_iterator<int>(cout, " "));
	return 0;
}