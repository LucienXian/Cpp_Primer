#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	vector<int> v{ 1,2,3,11,5,8,0,8,9,14 };
	list<int> l{ 1,2,3,4,0,6,7 };
	list<int> to_cp(5);
//	for (auto r_it = v.cbegin(); r_it != v.cend(); r_it++)
		
	copy(v.cbegin() + 3, v.cbegin() + 8, to_cp.rbegin());
	for (auto i : to_cp)
		cout << i << " ";
	return 0;
}