// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"  
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>
#include <iostream>

using std::vector; using std::string;

vector<int>* alloc_vector()
{
	return new vector<int>();
}

void input_vec(vector<int>* ptr_v)
{
	int i;
	while (std::cin >> i)
	{
		ptr_v->push_back(i);
	}
}

void print_vec(vector<int>* ptr_v)
{
	for (auto i : *ptr_v)
		std::cout << i << std::endl;
}

int main()
{
	auto p = alloc_vector();
	input_vec(p);
	print_vec(p);
	delete p;
}
