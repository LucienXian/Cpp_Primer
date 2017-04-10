// screen_pr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Screen
{
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos h, pos w):height(h), width(w), contents(h*w, ' '){}
	Screen(pos h, pos w, char c) :height(h), width(w), contents(h*w, c) {}
//	~Screen();
	char get(pos r, pos c) const { return contents[r*width + c*height]; }
private:
	pos height=0, width=0;
	string contents;
};

Screen::Screen()
{
}

Screen::~Screen()
{
}

int main()
{
    return 0;
}

