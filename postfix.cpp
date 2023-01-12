#include<iostream>
using namespace std;
#define MAX 100

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
			if(full() == 0)
			{
//				cout<<"Stack full!";
				return;
			}
			else
			{
				top ++;
				data[top] = x;
			}
		}
		int pop()
		{
			if(!empty())
			{
				int x;
				x = data[top];
				top--;
				return x;
			}
			else
			{
				cout<<"Empty stack";
			}
		}
};

int priority(int op)
{
	if(op == '/' || op == '*')
	{
		return 2;
	}
	if(op == '+' || op == '-')
	{
		return 1;
	}
}

int main()
{
	Stack st;
	char postfix[100];
	char infix[100];
	cin.getline(infix,100);
	int i,j;
	while(infix[i] != '0')
	{
		char ch = infix[i];
		if(ch == '+' || ch == '-' || ch == '/' || ch == '*')
		{
			char opexp = ch;
			while(st.empty() == 0)
			{
				char opstack = st.pop();
				if(priority(opstack) >= priority(opexp))
				{
					postfix[j] = opstack;
					j++;
				}
				else
				{
					st.push(opstack);
					break;
				}
			}
			st.push(opexp);
		}
		else
		{
			postfix[j] = ch;
			j++;
		}
		i++;
	}
	while(st.empty() == 0)
	{
		postfix[j] = st.pop();
		j++;
	}
	postfix[j] = '\0';
	cout<<postfix;
}















