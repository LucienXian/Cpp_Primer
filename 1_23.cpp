//#include "stdafx.h"
#include <iostream>
#include "Sale_item.h"

using namespace std;

int main()
{
	Sales_item item, New_item;
	if(cin >> item)
	{
		int count = 1;
		while (cin >> New_item)
		{
			if (item.isbn == New_item.isbn)
				count++;
			else
			{
				cout << item.isbn << " count: " << count << endl;
				count = 1;
				item = New_item;
			}
		}
		return 0;
	}
	else
	{
		cerr << "No Data";
	}
}