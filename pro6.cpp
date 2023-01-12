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
		~Node()
		{
			
		}
};
class SLL
{
	Node * head;
	public:
		SLL()
		{
			head = NULL;
		}
		void create();
		void show();
		int count();
		void addatbeg();
		void addatend();
		void addbypos();
};

void SLL::create()
{
	Node *p;
	int n,x,i;
	cout<<"\nEnter no. of nodes : ";
	cin>>n;
	cout<<"\nEnter firdst data : ";
	head = new Node(x);
	p = head;
	for(i=1;i<n-1;i++)
	{
		cout<<"\nEnter Next data : ";
		cin>>x;
		p->next = new Node(x);
		p = p->next;
	}
}

void SLL::show()
{
	Node *p;
	p = head;
	int i;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
}

int SLL::count()
{
	Node *p;
	p = head;
	int c = 0;
	while(p!=NULL)
	{
		c++;
		p = p->next;
	}
	return c;
}

void SLL::addatbeg()
{
	int x;
	cout<<"Enter data : ";
	cin>>x;
	if(head == NULL)
	{
		head = new Node(x);
	}
	else
	{
		Node *p;
		p = new Node(x);
		p->next = head;
		head = p;
	}
}

void SLL::addatend()
{
	int x;
	cout<<"Enter data : ";
	cin>>x;
	if(head == NULL)
	{
		head = new Node(x);
	}
	else
	{
		Node * p;
		p = head;
		Node *q;
		q = new Node();
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = q;
		q = NULL;
	}
}

void SLL::addbypos()
{
	int pos;
	int  x;
	cout<<"Enter data : ";
	cin>>x;
	cout<<"Enter pos : ";
	Node *q = new Node(x);
	Node *p;
	p = head;
	int i;
	for(i=1;i<pos-1;i++)
	{
		p = p->next;
	}
	q->next = p->next;
	p->next = q;
}

int main()
{
	
}
