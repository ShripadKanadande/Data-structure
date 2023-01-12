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

class Stack
{
	Node * top;
	public:
		Stack()
		{
			top = NULL;
		}
		int isempty()
		{
			if(top == NULL)
			{
				return 1;
			}
		}
		int push(int x)
		{
			Node *p;
			p = new Node(x);
			p->next = top;
			top = p;
		}
		int pop()
		{
			if(isempty() == 1)
			{
				cout<<"Empty stack "<<endl;
			}
			else
			{
				int x;
				Node *p;
				p = top;
				x = p->data;
				top = top->next;
				delete p;
				return x;
			}
		}
		void show()
		{
			Node *p;
			p = top;
			while(p!='\0')
			{
				cout<<p->data<<endl;
				p = p->next;
			}
		}
};

int main()
{
	Stack st;
	
	
	return 0;
}
