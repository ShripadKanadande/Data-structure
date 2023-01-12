#include<iostream>
using namespace std;
#define MAX 10

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
//				cout<<"Empty stack!"<<endl;
				return 1;
			}
			return 0;
		}
		int full()
		{
			if(top == MAX-1)
			{
//				cout<<"Stack is full!"<<endl;
				return 1;
			}
			return 0;
		}
		void show()
		{
			int i;
			for(i=top;i<MAX-1;i++)
			{
				cout<<data[top]<<endl;
			}
		}
		void push(int x)
		{
			top++;
			data[top] = x;
		}
		int pop()
		{
			int x;
			x = data[top];
			top--;
			return x;
		}
};

int priority(char op)
{
	if(op == '+' || op == '-')
	{
		return 1;
	}
	if(op == '*' || op == '/')
	{
		return 2;
	}
}

int main()
{
	Stack st;
//	cout<<st.empty();
	
	char infix[30],postfix[30];
	
	cout<<"Enter infix expression : "<<endl;
	cin.getline(infix,30);
	
	int i=0,j=0;
	int opexp,opstack;
	
	while(infix[i] != '\0')
	{
		char ch = infix[i];
		if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			while(st.empty() == 0)
			{
				opexp = ch;
				opstack = st.pop();
				if(priority(opstack) >= priority(opexp))
				{
//					st.push(ope);
					postfix[j] = opstack;
					j++;
				}
				else
				{
					
					st.push(opstack);
					break;
				}
			}
			st.push(ch);
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
	cout<<"Postfix = "<<postfix;
}
