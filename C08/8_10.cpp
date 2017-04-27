// IOuse.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;



int main()
{
	string line, word;
	vector<string> line_e, word_e;
	ifstream in("Text.txt");
	while (getline(in, line))
	{
		line_e.push_back(line);
		istringstream record(line);
		while (record >> word) word_e.push_back(word);
	}
	for (auto &i : word_e) cout << i << endl;
	return 0;
}

