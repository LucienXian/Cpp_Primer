#include "stdafx.h"
//#include "stdafx.h"
#include <iostream>
#include <queue>
#include <functional>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8 };
	for (auto r_it = v.cbegin(); r_it != v.cend(); r_it++)
		cout << *r_it << endl;
	return 0;
}