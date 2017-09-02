#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4,5,6,0,8,9 };
	list<int> l{ 1,2,3,4,0,6,7 };
//	for (auto r_it = v.cbegin(); r_it != v.cend(); r_it++)
		
	auto it = find(l.crbegin(), l.crend(), 0);
	cout << *it << endl;
	cout << distance(it, l.crend()) << endl;
	return 0;
}