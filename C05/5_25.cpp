// func.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int call_count(int i)//�β�
{
	static size_t n=10; //�ֲ���̬����
	return n+=i;
}

int main()
{
	for (int i = 0; i < 10; i++)//�ֲ�����
	{
		cout << call_count(i) << endl;
	}
	
    return 0;
}

