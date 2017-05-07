#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i = 3;
	auto f = [](int& a)->bool {if(a!=0) a--; return a == 0; };
	cout << f(i) << endl;
	cout << f(i) << endl;
	cout << f(i) << endl;
	cout << f(i) << endl;
	return 0;
}