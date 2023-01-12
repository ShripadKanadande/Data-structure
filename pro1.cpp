#include<iostream>
using namespace std;

class Node
{
	public:
		
		int data;
		Node* next;
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
		~Node()
		{
			cout<<"In destructor!";
		}
};

int main()
{
	Node *p = NULL;
	Node*head = NULL;
	int n;
	cout<<"Enter how many nodes u want to create? : ";
	cin>>n;
	int x;
	cout<<"\nEnter first data : ";
	cin>>x;
	p = new Node(x);
	head = p;
	int i;
	for(i=0;i<n-1;i++)
	{
		cout<<"Enter next data : ";
		cin>>x;
		p->next = new Node(x);
		p = p->next;
	}
	p = head;
	for(i=0;i<n;i++)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
	
	return 0;
}

