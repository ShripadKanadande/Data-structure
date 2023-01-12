#include<iostream>
using namespace std;
#define MAX 10

int findmax(int *num,int n)
{
	int i;
	int max = num[0];
	for(i=0;i<n;i++)
	{
		if(max<num[i])
		{
			max = num[i];
		}
	}
	return max;
}

int main()
{
	int i,j,k,bucketno,n=MAX;
	int * num;
	num = new int [n];
	
	for(i=0;i<n;i++)
	{
		num[i] = MAX-i;
//		cout<<"HI";
		cout<<num[i]<<" ";
	}
	
	int bucket[10][n];
	int count[10];
	int passes,max,div,row,col;
	
	max = findmax(num,n);
	while(max>0)
	{
		max = max/10;
		passes++;
		
	}
	while(passes>0)
	{
		for(i=0;i<=9;i++)
		{
			count[i] = 0; //Empty bucket
		}
		for(i=0;i<n;i++)
		{
			bucketno = (num[i]/div)%10;
			col = count[bucketno];
			bucket[bucketno][col] = num[i];
			count[bucketno]++;
		}
		k=0;
		for(i=0;i<=9;i++)
		{
			j=0;
			while(j<count[i])
			{
				num[k] = bucket[i][j];
				k++;
				j++;
			}
		}
		passes--;
		div = div/10;
		
	}
	cout<<"\n\n\n";
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
		cout<<"HI";
	}
}
