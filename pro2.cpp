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
		cout<<"In Destructor!";
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
};

void SLL::create()
{
	Node*p;
	int n;
	cout<<"\nEnter No of nodes : ";
	cin>>n;
	int x;
	cout<<"\nEnter data : ";
	cin>>x;
	p = new Node(x);
	head = p;
	int i;
	for(i=0;i<n-1;i++)
	{
		cout<<"Enter next data : ";
		cin>>x;
		p = new Node(x);
		p = p->next;
	}	
}

void SLL::show()
{
	Node * p;
	p = head;
	while(p!=NULL)
	{
		cout<<p->data;
		p = p->next;
	}
	cout<<endl;
}

int main()
{
	SLL T1,T2;
	T1.create();
	T2.create();
	T1.show();
	T2.show();
	return 0;
}

