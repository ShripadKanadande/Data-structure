#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node * next;
	Node()
	{
		data = 0;
		next = NULL;
	}
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

int main()
{
	Node * head;
	Node *p;
	int x,n;
	cout<<"\nEnter No. of nodes u want to create : ";
	cin>>n;
	cout<<"\nEnter first data : ";
	cin>>x;
	head = new Node (x);
	p = head;
	int i;
	for(i=0;i<n-1;i++)
	{
		cout<<"Enter next data : ";
		cin>>x;
		p->next = new Node(x);
		p = p->next;
	}
	p = head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
	
	Node *prev = NULL;
	Node *forward = NULL;
	p = head;
	while(p != NULL)
	{
		forward = p->next;
		p->next = prev;
		prev = p;
		p = forward;
	}
	while(prev != NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
	
	
	return 0;
}

