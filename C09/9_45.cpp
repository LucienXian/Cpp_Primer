#include <string>
#include <iostream>
//#include <iterator>

using namespace std;

string add_pre_post(string& name, const string& pre, const string& post)
{
	name.insert(name.begin(), pre.cbegin(), pre.cend());
	name.append(post);
	return name;
}


int main()
{
	string s("Mary");
	cout << add_pre_post(s,"Mr."," iii") << endl;
	return 0;
}
