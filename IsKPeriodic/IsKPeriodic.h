#pragma once
#include <iostream>
using namespace std;

int IsKPeriodic(string s)
{
	string pat;
	for (int i = 0; i < s.size(); i++)
	{
		pat.push_back(s[i]);
		if (pat[0] == s[i + 1])
		{
			return pat.size();
		}
	}
	return -1;
}