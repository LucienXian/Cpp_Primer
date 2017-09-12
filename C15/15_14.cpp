// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <string>




class base
{
public:
	std::string name() { return basename; }
	virtual void print(std::ostream &os) { os << basename; }
	//     ~~~~~^^^^^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//  The print here just output the basename of the base.
private:
	std::string basename = "base\n";
};

class derived : public base
{
public:
	void print(std::ostream &os) override { base::print(os); os << " derived\n " << i; }
	//   ^^^^^                   ^^^^^^^^   ^^^^^^    --  added to fix this problem
	//  this print wanted to call the print from the base class.
	//  however, the class scope base:: was omitted.As a result
	//  it will cause an infinit recursion.
	//  btw, we can add a keyword `override` to show this function
	//  overrides a virtual function from the base class, although
	//  it is not neccessary, but for security, the more, the better.


private:
	int i;
};



int main()
{
	// ex15.14
	base bobj;
	base *bp1 = &bobj;
	base &br1 = bobj;
	derived dobj;
	base *bp2 = &dobj;
	base &br2 = dobj;

	// a.  this is an object, so compile time.
	//bobj.print(std::cout);

	// b.  this is an object, so compile time.
	//dobj.print(std::cout);

	// c.  function name is not virtual , so no dynamic
	//     binding happens.so compile time
	//std::cout << bp1->name();

	// d.  function name is not virtual , so no dynamic
	//     binding happens.so compile time
	//std::cout << bp2->name();

	// e.  run time
	br1.print(std::cout);

	// f.  run time
	br2.print(std::cout);


	return 0;
}

