#include<iostream>
using namespace std;

void myfun(int x)
{
	if(x>3)
	{
		return;
	}
	else
	{
		myfun(x+1);
		cout<<x;
		myfun(x+2);
	}
}

int main()
{
	myfun(1);
}
