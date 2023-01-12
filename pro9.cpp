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
};

class SLL
{
	
	public:
		Node * head;
		SLL()
		{
			head = NULL;
		}
		void create();
};

void SLL::create()
{
	int x;
	Node * p;
	cout<<"Enter first data : ";
	cin>>x;
	head = new Node(x);
	p = head;
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"Enter next data : ";
		cin>>x;
		p->next = new Node(x);
		p = p->next;
	}
}

int main()
{
	SLL obj1;
	SLL obj2;
	SLL Ans;
	
	obj1.create();
	obj2.create();
//	Ans.create();
	Node * p;
	
	p = obj1.head;
	int num1;
	num1 = p->data + p->next->data*10 + p->next->next->data*100;
	cout<<"Num1 = "<<num1<<endl;
	
	int num2;
	p = obj2.head;
	num2 = p->data + p->next->data*10 + p->next->next->data*100;
	cout<<"Num2 = "<<num2<<endl;
	int num;
	int ans;
	ans = num1 + num2;
//	cout<<ans<<endl;
//
	num = ans;
	cout<<"Addition = "<<num<<endl;
	int i,h,t,r;
	for(i=0;i<3;i++)
	{
		h = num/10;
		num = num%100;
		t = num%10;
		r = num/10;
	}
	
	cout<<h<<" "<<t<<" "<<r<<endl;
//	cout<<ans;
	return 0;
}














