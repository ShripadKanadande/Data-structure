#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

class Node
{
	public:
		int data;
		Node *next;
		Node ()
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
		void copy(SLL Temp);
		Node * copy();
		void show();
};

void SLL::create()
{
	cout<<"Enter data : ";
	char str[100];
	cin.getline(str,30);
	Node *p;
	p = new Node(atoi(str));
	head = p;
	while(1)
	{
		if(strcmp(str,"STOP") == 0)
		{
			break;
		}
		else
		{
			cout<<"Enter next data : ";
			cin.getline(str,30);
			p->next = new Node(atoi(str));
			p = p->next;
		}
	}
}

void SLL::show()
{
	Node *p;
	p = head;
	while(p->next != NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
}

void copy(SLL Temp)
{
	
}

int main()
{
	SLL S1,S2;
	S1.create();
	S1.show();
	S1.copy(S2);
}






