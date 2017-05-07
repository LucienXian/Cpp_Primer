#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> lst1;
	list<int> lst2;
	list<int> lst3;
	copy(vec.cbegin(), vec.cend(), back_inserter(lst1));
	copy(vec.cbegin(), vec.cend(), front_inserter(lst2));
	copy(vec.cbegin(), vec.cend(), inserter(lst3, lst3.begin()));
	for (auto &i : lst1) 
		cout << i << " ";
	cout << endl;
	for (auto &i : lst2)
		cout << i << " ";
	cout << endl;
	for (auto &i : lst3)
		cout << i << " ";
	return 0;
}