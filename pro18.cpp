#include<iostream>
using namespace std;
#define MAX 5

class Stack
{
	int data[MAX];
	int top;
	public:
		Stack()
		{
			top = -1;
		}
		int empty()
		{
			if(top == -1)
			{
				return 1;
			}
			return 0;
		}
		int full()
		{
			if(top == MAX-1)
			{
				return 1;
			}
			return 0;
		}
		void push(int x)
		{
			if(!full())
			{
				top++;
				data[top] = x;
			}
			else
			{
				cout<<"Stack full!!"<<endl;
			}
		}
		int pop()
		{
			if(!empty())
			{
				int x = data[top];
				top--;
				return x;
			}
			else
			{
				cout<<"Stack empty!!"<<endl;
			}
		}
		void show()
		{
			int p;
			p = top;
			while(p!=-1)
			{
				cout<<data[p]<<"  ";
				p--;
			}
		}
};

int main()
{
	Stack S;
//	cout<<S.empty()<<endl;
//	cout<<S.full()<<endl;
	S.push(10);
	S.push(10);
	S.push(10);
	S.push(10);
	S.push(10);
	S.push(10);
	
	S.show();
	
	S.pop();
	S.pop();
	S.pop();
	S.pop();
	S.pop();
	S.pop();
}
