#include<iostream>
#include<stdio.h>
using namespace std;

class Node
{
	public:
	int data;
	Node * next = NULL;
	Node()
	{
		data = 0;
		next = NULL;
	}
	~Node()
	{
		cout<<"Distroyed!!";
	}
};

void print();

int main()
{
	Node T1;
}










