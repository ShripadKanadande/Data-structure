#include<iostream>
using namespace std;

int main()
{
	int num[5] = {3,2,4};
	int target = 6;
	int ans[2] = {0};
	int k = 0;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i] + num[j] == target)
			{
				ans[k] = i;
				k++;
				ans[k] = j;
				k++;
			}
		}
	}
	for(k=0;k<2;k++)
	{
		cout<<ans[k]<<endl;
	}
}
