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
		while (getline(ifs, buf))
			fileline.push_back(buf);
	}
}

int main()
{
	
	return 0;
}

