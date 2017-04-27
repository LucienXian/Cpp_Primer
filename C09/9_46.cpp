#include <string>
#include <iostream>
//#include <iterator>

using namespace std;

string add_pre_post(string& name, const string& pre, const string& post)
{
	name.insert(name.size(), post);
	name.insert(0, pre);
	return name;
}


int main()
{
	string s("Mary");
	cout << add_pre_post(s,"Mr."," iii") << endl;
	return 0;
}
