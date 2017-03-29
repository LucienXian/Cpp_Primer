#pragma once
#ifndef PERSON
#define PERSON

#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
	string GetName() const& { return name; }
	string GetAddr() const& { return address; }
	istream &read(istream &is, Person &item); 
	ostream &print(ostream &os,const Person &item);
private:
	string name;
	string address;
};

istream &Person::read(istream &is, Person &item)
{
	return is >> item.name >> item.address;
}

ostream &Person::print(ostream &os,const Person &item)
{
	return os << item.name << item.address;
}

#endif // !PERSON