#include<iostream>
using namespace std;

int myfun(int x,int * sum)
{
	if(x<=5)
	{
		*sum = *sum + x;
		myfun(x+1,sum);
	}
	return *sum;
}
int main()
{
	int * sum;
	int add;
	sum = &add;
	add = myfun(1,sum);
	cout<<add;
}
