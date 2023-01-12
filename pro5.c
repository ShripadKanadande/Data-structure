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
		Node(int x)
		{
			data = x;
			next = NULL;
		}
		~Node()
		{
			
		}
}
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
		void count();
		void addatbeg();
		void addatend();
		void addbypos();
}

void SLL::create()
{
	Node *p;
	int n,x,i;
	cout<<"\nEnter no. of nodes : ";
	cin>>n;
	cout<<"\nEnter firdst data : ";
	head = new Node(x);
	p = head;
	for(i=1;i<n-1;i++)
	{
		cout<<"\nEnter Next data : ";
		cin>>x;
		p->next = new Node(x);
		p = p->next;
	}
}

void SLL::show()
{
	Node *p;
	p = head;
	int i;
	for(i=1;i<n-1;i++)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
}

int main()
{
	
}
