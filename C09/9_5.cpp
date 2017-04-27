// stl_use.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
//#include <iterator>

using namespace std;

vector<int>::const_iterator find_ele(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i)
{
	while (begin++!=end)
		if (*begin == i) return begin;
	return end;
}

int main()
{
	int a[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };
	vector<int> iVector(a, a + 10);
	int index = 0;

	vector<int>::const_iterator it = find_ele(iVector.begin(), iVector.end(), index);

	if (it != iVector.end())
		cout << *it << endl;
	else cout<<"Not found"<<endl;
//	vector<int> vec = { 1, 2, 4, 3, 5, 8, 10, 3, 4 };
//	cout << find_ele(vec.begin(), vec.end(), 2) - vec.begin() << endl;
//	cout << find_ele(vec.begin(), vec.end(), 6) - vec.begin() << endl;
	
	return 0;
}

