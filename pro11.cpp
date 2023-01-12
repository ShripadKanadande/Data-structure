#include<iostream>
using namespace std;

int myfun(int x)
{
	if(x == 0)
	{
		return 0;
	}
	else
	{
		int res;
		res = myfun(x-1);
		return res + x;
	}
}

int main()
{
	int add;
	add = myfun(5);
	cout<<add;
	return 0;
}
