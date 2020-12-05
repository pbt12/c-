// stack using queues
#include<bits/stdc++.h>
using namespace std;

class Queue1{
	private :
		int arr[4];
		int rear;
		
	public:
		Queue1()
		{
			rear = -1;
	
			for(int i=0;i<4;i++)
			{
				arr[i]=0;
			}
		}
			bool isEmpty()
			{
				if(rear==-1)
				{
					return true;
				}
				else return false;
			}
			bool isFull()
			{
				if(rear==4)
				{
					return true;
				}
				else 
				return false;
			}
			void Dequeue()
			{
				rear--;
				cout<< arr[rear] << endl;
				arr[rear]=0;
				
			}
			void Enqueue(int value)
			{
				if(isEmpty())
				{
					rear=0;
					arr[rear]=value;
					rear++;
				}
				else if(isFull())
				{
					cout << "stack is full" << endl;
				}	
				else {
					arr[rear]=value;
					rear++;
				}
			}
		
};

int main()
{
	Queue1 q;
	q.Enqueue(1);
	q.Enqueue(2);
	q.Enqueue(3);
	q.Enqueue(4);
	q.Dequeue();
	q.Dequeue();
	q.Dequeue();
	q.Dequeue();

	return 0;
}
