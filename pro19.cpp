#include<iostream>
using namespace std;
#define MAX 5

class Queue
{
	int front,rear;
	int data[MAX];
	public:
		Queue()
		{
			front = -1;
			rear = -1;
		}
		int empty()
		{
			if(front == -1)
			{
				return 1;
			}
			return 0;
		}
		int full()
		{
			if(rear == MAX-1)
			{
				return 1;
			}
			return 0;
		}
		void enqueue(int x)
		{
			if(!full())
			{
				if(empty())
				{
					front = 0;
					rear = 0;
				}
				else
				{
					rear++;
				}
				data[rear] = x;
			}
			else
			{
				cout<<"Stack full!!"<<endl;
			}
		}
		int dequeue()
		{
			if(!empty())
			{
				int x;
				x = data[front];
				if(front == rear)
				{
					front = -1;
					rear = -1;
				}
				front++;
				return x;
			}
			else
			{
				cout<<"Stack empty!!"<<endl;
			}
		}
		void show()
		{
			int i = front;
			do
			{
				cout<<data[i]<<" ";
				i++;
			}
			while(i!=rear);
		}
};

int main()
{
	Queue Q;
//	cout<<Q.empty()<<" "<<Q.full();
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.enqueue(10);
	Q.show();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	cout<<"\n\n"<<Q.dequeue();
	
}
