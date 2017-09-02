#include "stdafx.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include <string>

using namespace std;

int main()
{
	vector<string> v;
	ifstream ifs("books.txt");
	istream_iterator<string> in_iter(ifs), eof;
	ostream_iterator<string> out(cout,"\n");
	copy(in_iter, eof, back_inserter(v));
	copy(v.cbegin(), v.cend(), out);
	return 0;
}