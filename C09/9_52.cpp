#include <stack>
#include <string>
#include <iostream>
//#include <iterator>

using namespace std;
string calc(string l, string r, string op)
{
	string s;
	if (op == "-")
		s = to_string(stoi(l) - stoi(r));
	else if(op == "+")
		s = to_string(stoi(l) + stoi(r));
	else if (op == "*")
		s = to_string(stoi(l) * stoi(r));
	else if (op == "/")
		s = to_string(stoi(l) / stoi(r));
	return s;
}


int main()
{
	stack<string> ma;
	string math("1+2*(7-4)");
	for (auto iter = math.begin(); iter != math.end();) {
		if (*iter == '(')
		{
			ma.push(string(1, *iter));
			iter++;
			while (*iter != ')')
			{
				ma.push(string(1, *iter));
				iter++;
			}
		}
		else if (*iter == ')') {
			
//			iter = iter+3;
			string a = ma.top(); ma.pop();
			string op = ma.top(); ma.pop();
			string b = ma.top(); ma.pop();
			ma.pop();
			ma.push(calc(b, a, op));
			iter++;
		}
		else
			iter++;
	}
	while (!ma.empty()) {
		cout << ma.top() << endl;
		ma.pop();
	}

	return 0;
}