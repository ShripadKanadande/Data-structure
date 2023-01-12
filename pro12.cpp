#include<iostream>
using namespace std;
#define MAX 5

class Stack
{
	public:
		int data [MAX];
		int top;
		Stack()
		{
			top = -1;
		}
		void push(int x);
		void show();
		int pop();
		int empty();
};

int Stack::empty()
{
	if(top == -1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int Stack::pop()
{
	int t = data[top];
	top--;
	return t;
}

void Stack::show()
{
	while(top>-1)
	{
		cout<<data[top]<<" ";
		top--;
	}
}

void Stack::push(int x)
{
	if(top == MAX-1)
	{
		cout<<"Stack full !!";
		return;
	}
	top++;
	data[top] = x;
}

int main()
{
	Stack st;
	int n;
	cout<<"Enter a number : "<<endl;
	cin>>n;
	while(n>0)
	{
		st.push(n%2);
		n = n/2;
	}
	cout<<"Binary of given number is : "<<endl;
	st.show();

	return 0;
}

