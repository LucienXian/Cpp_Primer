// stl_use.cpp : 定义控制台应用程序的入口点。
//

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
			s.replace(it, it + oldVal.size(),newVal);
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