#pragma once
#include <memory>
#include <vector>
#include <string>
#include <initializer_list>
#include <exception>

using namespace std;

class strblb
{
public:
	typedef vector<string>::size_type size_type;
	strblb();
	strblb(initializer_list<string> il):data(make_shared<vector<string>>(il)) {};
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop() { check(0, "pop_back from empty stack!"); data->pop_back(); }
	string& front()
	{
		check(0, "front on empty StrBlob");
		return data->front();
	}

	string& back()
	{
		check(0, "back on empty StrBlob");
		return data->back();
	}

	const string& front() const { check(0, "front on empty StrBlob"); return data->front(); }
	const string& back() const { check(0, "back on empty StrBlob"); return data->back(); }
//	~strblb();

private:
	void check(size_type i, const string& msg) const {
		if (i >= data->size()) throw out_of_range(msg);
	}

private:
	shared_ptr<vector<string>> data;
};

