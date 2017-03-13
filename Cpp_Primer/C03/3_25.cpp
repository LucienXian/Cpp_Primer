// iterator_py.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	while (cin >> grade) {
		if (grade <= 100)
			++*(it + grade/10);
	}
	for (auto c : scores)
		cout << c << endl;
}

