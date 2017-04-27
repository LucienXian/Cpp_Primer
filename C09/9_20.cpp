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
	list<int> l_test = { 1,2,3,4,5,6,12,5 };
	deque<int> even;
	deque<int> odd;
	for (auto& i : l_test) {
		if (i % 2) odd.push_back(i);
		else even.push_back(i);
	}
	for (auto &i : odd) cout << i << endl;
	cout << "______" << endl;
	for (auto &i : even) cout << i << endl;
	return 0;
}

