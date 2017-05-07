#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec{ 1, 1, 3, 3, 5, 5, 7, 7, 9 };
	list<int> lst;
	unique_copy(vec.cbegin(), vec.cend(), back_inserter(lst));
	for (auto &i : lst) {
		cout << i << " ";
	}
	return 0;
}