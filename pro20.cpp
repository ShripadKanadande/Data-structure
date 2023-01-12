//QUICK SORT
#include<iostream>
using namespace std;

int partition(int *arr,int l,int u)
{
    int pivot = arr[l];
    int p =l+1;
    int q = u;
    do{
        while(arr[p]<pivot && p <= u){
            p++;
        }
        while(arr[q]>pivot){
            q--;
        }
        if(p<q){
            swap(arr[p],arr[q]);
        }
    }while(p<q);
    swap(arr[l],arr[q]);
    return q;
}

void quicksort(int *arr,int l,int u)
{
    if(l<u)
	{
        int p = partition(arr,l,u);
        quicksort(arr,0,p-1);
        quicksort(arr,p+1,u);
    }
}
int main()
{
    int n,*arr;
    cin>>n;
    arr = new int[n];
    for(int i=0;i<n;i++)
	{
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
	{
        cout<<arr[i]<<" ";
    }
}
