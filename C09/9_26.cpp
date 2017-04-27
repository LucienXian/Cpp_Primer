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



int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> even(begin(ia), end(ia));
	list<int> odd(even.begin(), even.end());
	for (auto i = even.begin(); i != even.end(); )
		if (*i % 2==0) i = even.erase(i);
		else i++;
	for (auto i = odd.begin(); i != odd.end(); )
		if (*i % 2) i = odd.erase(i);
		else i++;
	for (auto& i : even)
		cout << i << endl;
	cout << "__________" << endl;
	for (auto& i : odd)
		cout << i << endl;
	return 0;
}

