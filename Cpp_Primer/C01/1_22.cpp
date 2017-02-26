#include "stdafx.h"
#include "Sale_item.h"
#include <iostream>

using namespace std;

int main()
{
	Sales_item total;
	if (cin >> total)
	{
		Sales_item item;
		while (cin >> item)
		{
			if (total.isbn == item.isbn) 
			{
				total += item;
			}
			cout << total << endl;
		}
	}
	else
	{
		cerr << "No input data" ;
		return -1;
	}
	
}