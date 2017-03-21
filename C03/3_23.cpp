// iterator_py.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> in{1,2,3,4,5,6,7,8,9,10};
//	in.push_back(11);
	for (auto &c : in) {
		c *= 2;
		cout << c << endl;
	}
	
    return 0;
}

