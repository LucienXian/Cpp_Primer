#pragma once
#ifndef PERSON
#define PERSON

#include <string>
#include <iostream>

using namespace std;

class Person
{
	friend istream &read(istream &is, Person &item);
	friend ostream &print(ostream &os, const Person &item);
public:
	Person(const string &n, const string &a):name(n), address(a){}
	Person(istream &is) { read(is, *this); }
	string GetName() const& { return name; }
	string GetAddr() const& { return address; }
private:
	string name;
	string address;
};

istream &read(istream &is, Person &item)
{
	return is >> item.name >> item.address;
}

ostream &print(ostream &os,const Person &item)
{
	return os << item.name << item.address;
}

#endif // !PERSON
