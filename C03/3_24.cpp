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
	auto f = in.begin();
	auto l = in.end()-1;
	while (f<=l)
	{
		cout << *f + *l << endl;
		f++;
		l--;
	}
    return 0;
}

