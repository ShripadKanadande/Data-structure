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
		Node (int x)
		{
			data = x;
			next = NULL;
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
		void addatbeg(int x);
		void addatend(int x);
		void addbypos(int pos,int x);
		int count();
		void delatbeg();
		void delatend();
};

void SLL::delatend()
{
	Node *p;Node *q;
	p = head;
	q->next = p;
	while(p->next != NULL)
	{
		p = p->next;
	}
	q->next = NULL;
	delete p;
	p = NULL;
}

void SLL::delatbeg()
{
	Node * p;
	p = head;
	head = head->next;
	delete p;
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

void SLL::addbypos(int pos,int x)
{
	int c = count();
	if(pos<0 || pos>c+1)
	{
		cout<<"Wrong pos!!"<<endl;
		return;
	}
	if(pos == 1)
	{
		addatbeg(x);
		return;
	}
	if(pos == c+1)
	{
		addatend(x);
		return;
	}
	Node *p,*q;
	p = head;
	int i;
	for(i=0;i<pos-1;i++)
	{
		p = p->next;
	}
	q = new Node (x);
	q->next = p->next;
	p->next = q;
}

void SLL::addatend(int x)
{
	Node *p,*q;
	q = new Node (x);
	p = head;
	while(p->next != NULL)
	{
		p = p->next;
	}
	p->next = q;
	
}

void SLL::addatbeg(int x)
{
	Node *p;
	p = new Node(x);
	p->next = head;
	head = p;
}

void SLL::create()
{
	Node *p;
	int x;
	cout<<"Enter first data : ";
	cin>>x;
	if(x == -1)
	{
		return;
	}
	head = new Node(x);
	p = head;
	while(1)
	{
		cout<<"Enter next data : ";
		cin>>x;
		if(x == -1)
		{
			return ;
		}
		p->next = new Node(x);
		p = p->next;
	}
}

void SLL::show()
{
	Node *p;
	p = head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
}

int main()
{
	SLL S1;
	S1.create();
	S1.addatbeg(100);
	S1.addatend(500);
	S1.addbypos(3,200);
	S1.delatbeg();
	S1.delatend();
	cout<<"\n\n";
	S1.show();
	
}
