#include<iostream>
using namespace std;

class Queue1{
	private:
		int arr[4];
		int front;
		int rear;
	public:
		Queue1()
		{
			rear =-1;
			front =-1;
			for(int i=0;i<4;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if(rear==-1&&front==-1)
			{
				return true;
			}
			else return false;
		}				 
		
		void enQueue(int value)
		{
			if(isEmpty())
			{
				front=0;
				rear=0;
				arr[rear]=value;
			}
			else
			{
				rear=(rear+1)%4;
				arr[rear]=value;
			}
			
		}
		
		int deQueue()
		{
			if(isEmpty())
			{
				cout << "queue is empty" << endl;
				 return 0;
			}
			else if(rear == front)
			{
				int x;
				x=arr[front];
				rear=-1;
				front=-1;
				return x;
			}
			else 
			{
				int x=arr[front];
				front++;
				return x;
			}
			
		}
};

int main()
{
	Queue1 q1;
	q1.enQueue(2);
	q1.enQueue(3);
	q1.enQueue(4);
	q1.enQueue(5);
	for(int i=0;i<4;i++)
	{
		int n=q1.deQueue();
		cout << "deQueue value = " << n << endl;
	}
	q1.enQueue(6);
	q1.enQueue(7);
	q1.enQueue(8);
	q1.enQueue(9);
	for(int i=0;i<4;i++)
	{
		int n=q1.deQueue();
		cout << "deQueue value = " << n << endl;
	}
	return 0;;
}
