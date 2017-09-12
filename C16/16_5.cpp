// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>


using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename T>
int compare(const T& lhs, const T& rhs) 
{
	if (lhs < rhs) return -1;
	else if (lhs > rhs) return 1;
	else return 0;
}

namespace C16
{
	template <typename iter, typename val>
	auto find(iter begin, iter end, const val& v)
	{
		for (; begin != end&&*begin != v; begin++);
		return begin;
	}

	template <typename T>
	void print(const T& arr)
	{
		for (auto const& elem : arr)
			cout << elem << endl;
	}
}

int main()
{
	vector<int> v = { 1,2,3,4,5,6 };
	auto it = v.cend() != C16::find(v.cbegin(), v.cend(), 4);
	cout << (it ? "found" : "not found") << endl;
	string a("123");
	string b("asd");
	cout << compare(a, b) << endl;
	C16::print(a);
}
