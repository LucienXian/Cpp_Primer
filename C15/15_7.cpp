// inhe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Quote
{
public:
	Quote() = default;
	Quote(const string &book, double sales_price):bookNo(book), price(sales_price){}
	virtual ~Quote() = default;
	string isbn() const { return bookNo; }
	virtual double net_peice(size_t n) const { return n*price; }
private:
	string bookNo;
protected:
	double price = 0.0;
};

double print_total(ostream &os, const Quote &item, size_t n)
{
	double res = item.net_peice(n);
	os << "bookNo: " << item.isbn() << " " << "sold: " << n << endl;
	return res;
}

class bulk_quote :public Quote
{
public:
	bulk_quote(const string &book, double sales_price) : Quote(book,sales_price){}
	double net_peice(size_t n) const { if (n > 20) return n*price*0.8; }//80%
};

class bulk2_quote :public Quote
{
public:
	bulk2_quote(const string &book, double sales_price, int n, double dis):Quote(book, sales_price),num(n),discount(dis){}
	double net_peice(size_t n) const{
		if (n <= num) return n*price*(1 - discount);
		else return (n - num)*price + num*price*(1 - discount);
	}
private:
	double discount;
	int num;
};

int main()
{
	string bookno("dsd");
	bulk_quote b_q(bookno, 12.0);
//	cout << b_q.isbn() << endl;
//	cout << b_q.net_peice(21) << endl;
	Quote q("sas",12.0);
	bulk2_quote q2("q2", 12.0, 20, 0.2);
	cout << print_total(cout, q, 21) << endl;
	cout << print_total(cout, b_q, 21) << endl;
	cout << print_total(cout, q2, 21) << endl;
//	Quote q;
    return 0;
}

