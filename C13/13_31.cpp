// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include<algorithm>

class HasPtr {
public:
	friend void swap(HasPtr&, HasPtr&);
	HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
	HasPtr& operator=(const HasPtr &hp) {
		auto new_p = new std::string(*hp.ps);
		delete ps;
		ps = new_p;
		i = hp.i;
		return *this;
	}
	friend bool operator<(const HasPtr &lhs, const HasPtr &rhs) {
		return *lhs.ps < *rhs.ps;
	}
	~HasPtr() {
		delete ps;
	}

	void show() { std::cout << *ps << std::endl; }
private:
	std::string *ps;
	int i;
};

inline void swap(HasPtr& lhs, HasPtr& rhs)
{
	using std::swap;
	swap(lhs.i, rhs.i);
	swap(lhs.ps, rhs.ps);
	std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;
}



int main()
{
	std::vector<HasPtr> a;
	HasPtr b("wer");
	HasPtr c("c");
	HasPtr f("a");
	//swap(f, b);
	a.push_back(b);
	a.push_back(c);
	a.push_back(f);
	std::sort(a.begin(), a.begin());
	
}