// IOuse.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> fileline;

void readf(const string& fileName)
{
	ifstream ifs(fileName);
	if (ifs)
	{
		string buf;
		while (ifs>>buf)
			fileline.push_back(buf);
	}
}

int main()
{
	readf("filein.txt");
	for (auto&i : fileline) cout << i << endl;
	return 0;
}

