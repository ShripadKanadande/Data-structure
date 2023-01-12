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
		void create();
};

void Node::create()
{
	Node *p;
	int x,n;
	cout<<"Enter no. of nodes u want to create : ";
	cin>>n;
	cout<<"\nEnter first data : ";
	cin>>x;
	p = new Node(x);
	Node * head = p;
	int i;
	for(i=0;i<n-1;i++)
	{
		cout<<"\nEnter next data : ";
		cin>>x;
		p = new Node (x);
		p = p->next;
	}
	
}

int main()
{
	Node * head;
	Node * prev;
	Node * forward;
	Node * curr;
	
	curr->create();
	Node * head1 = curr;
	
	while(curr != NULL)
	{
		forward = curr->next;
		curr->next = prev;
		prev = curr;
		curr = curr->next;
	}
	while(head1 != NULL)
	{
		cout<<head1->data<<endl;
		head1 = head1->next;
	}
}










