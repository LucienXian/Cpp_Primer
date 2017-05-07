#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimdups(std::vector<std::string> &vs)
{
	std::sort(vs.begin(), vs.end());
	auto new_end = std::unique(vs.begin(), vs.end());
	vs.erase(new_end, vs.end());
}

void biggies_partition(std::vector<std::string> &vs, std::size_t sz)
{
	elimdups(vs);

	auto it = partition(vs.begin(), vs.end(),
		[sz](const std::string& a)
	{return a.size() <= sz; });

	for_each(it, vs.end(),
	[](const std::string& s) { std::cout << s << " "; });

	std::cout << std::endl;
}

int main()
{
	std::vector<std::string> v{ "the", "quick", "red", "fox", "jumps",
		"over", "the", "slow", "red", "turtle" };

	biggies_partition(v, 4);
	std::cout << std::endl;
	return 0;
}