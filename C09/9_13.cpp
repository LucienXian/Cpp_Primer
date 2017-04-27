// stl_use.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <list>
#include <vector>
#include <iostream>
//#include <iterator>

using namespace std;



int main()
{
	list<int> a(5, 4);
	vector<int> b(5, 4);

	vector<double> t_a(a.begin(), a.end());
	vector<double> t_b(b.begin(), b.end());
	cout << t_a[2] << " " << t_b[2] << endl;
	return 0;
}

