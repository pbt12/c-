#include<bits/stdc++.h>
using namespace std;

class queue1{
	private :
		int rear;
		int front;
		int arr[3];
	public :
		queue() {	
			rear=-1;
			front=-1;
			}
	
		bool isempty()
		{
			if ( (front==-1) && (rear==-1) )
			{
				return true;
			}
			else 
			{
				return false;
			}
		}
		bool isfull(int size)
		{
			if(rear+1==size)
			{
				return true;
			}	
			else 
			return false;
		}
		void inqueue(int value)
		{
			if(isempty())
			{
				cout<<"isempty() called" << endl;
				front=0;
				rear=0;
				arr[rear]=value;
				cout << "array value = " << arr[rear] << endl;
			}
		
			else{
				rear++;
				arr[rear]=value;
			}
		}
		int dequeue()
		{
			if(isempty())
			{
				cout<<"isempty() called" << endl;
				cout<<"empty queue" << endl;
	
			}
			else if(rear==front)
			{
				int x = arr[rear];
				rear=-1;
				front=-1;
				return x;
			}
			else 
			{
				int x=arr[front];
				cout<<"in dequeue front value = " << front << endl;
				front++;
				return x;
			}
			
		}
			
};



int main()
{
	queue1 q1;


	for(int i=0;i<3;i++)
	{
		int n;
		cin >> n;
		q1.inqueue(n);
	}

	for(int i=0;i<3;i++)
	{
		cout << "dequeue value is = " << q1.dequeue() << endl;
	
	}
	return 0;
}
