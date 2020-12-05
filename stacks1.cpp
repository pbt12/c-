#include<bits/stdc++.h>
using namespace std;

class mainstack{
	private :
		
		int arr[100];
		int top;
	public :
		mainstack()
		{
			top=-1;
		}
		
		bool isEmpty()
		{
			if(top==-1)
			{
				return true;
			}
			else return false;
		}
		
		bool isFull(int n)
		{
			if (top+1==n)
			{
				return true;
			}
			else return false;
		}
		
		int pop()
		{
			return arr[top];
		}
		
		void push(int value)
		{
			arr[++top]=value;
		}
		
};
