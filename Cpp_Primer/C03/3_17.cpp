// vector_pr.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	vector<string> words;
	for (int i = 0; i < 5; i++)
	{
		cin >> word;
		words.push_back(word);
		for (auto &w : words[i])
			w = toupper(w);
	}
	for (auto i : words)
		cout << i << endl;
	
}

