// ch12_strblob.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"  
#include <iostream>
#include <memory>
#include <string>

using std::string;
using std::shared_ptr;

struct connection
{
	string ip;
	int port;
	connection(string i, int p):ip(i),port(p){}
};

struct destination
{
	string ip;
	int port;
	destination(string i, int p):ip(i), port(p){}
};

connection connect(destination* pDest)
{
	//shared_ptr<int> a(new int(1));
	shared_ptr<connection> pCon(new connection(pDest->ip, pDest->port));
	std::cout << "creating connection(" << pCon.use_count() << ")" << std::endl;
	return *pCon;
}

void disconnect(connection pConn)
{
	std::cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" << std::endl;
}

void end_connection(connection* pConn)
{
	disconnect(*pConn);
}

void f(destination &d)
{
	connection conn = connect(&d);
	shared_ptr<connection> p(&conn, end_connection);
	std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}

int main()
{
	destination dest("220.181.111.111", 6000);
	f(dest);

	return 0;
}