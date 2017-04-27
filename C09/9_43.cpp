#include "stdafx.h"
#include <list>
#include <vector>
#include <deque>
#include <string>
#include <iostream>
//#include <iterator>

using namespace std;

void rep(string& s, const string& oldVal, const string& newVal)
{
	auto it = s.begin();
	while (it != s.end()-oldVal.size()+1)
	{
		if (oldVal == string(it, it + oldVal.size())) {
			s.erase(it, it + oldVal.size());
			s.insert(it, newVal.begin(), newVal.end());
			it += newVal.size();
		}
		else
			it++;
	}
}

int main()
{
	string s("To drive straight thru is a foolish, tho courageous act.");
	rep(s, "tho", "though");
	rep(s, "thru", "through");
	cout << s << endl;
	return 0;
}