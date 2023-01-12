#include<iostream>
using namespace std;
#define MAX 10

class Node
{
	public:
	int data;
	Node * next;
	Node ()
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

class SLL
{
	Node * head;
	public:
		SLL()
		{
			head = NULL;
		}
		
		Node * crreaterec()
		{
			int x;
			cout<<"Enter data : ";
			cin>>x;
			if(x == 0)
			{
				return NULL;
			}
			else
			{
				Node *p;
				p = new Node(x);
				p->next = crreaterec();
				return p;
			}
		}
		
		Node * gethead()
		{
			return head;
		}
		
};

int main()
{
	SLL S;
	S.crreaterec();
	
}
