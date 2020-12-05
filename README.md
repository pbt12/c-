# c-plus-plus
This respiratory contains my own codes those i made while i was learning data structures and algorithms
#include<bits/stdc++.h>
using namespace std;

int count =0 ;

class node{
	private:
		int* address;
		int data;
		
	public:
		node()
		{
			
			data=0;
			address = NULL;
		}
		node (int n)
		{
			data=n;
			address = NULL;
		}
			
};


class singlylinkedlist
{
	private:
		node* next;
		node* head;
		
	public :
		
		singlylinkedlist()
		{
			
			next=NULL;
		}
		void append(node* n)
		{
			if (::count == 0)
			{
				next=NULL;
				head = n;
				::count ++;
			}
			else
			{
				
			}
			
		}
		void display()
		{
			for(int i=0;i<::count;i++)
			{
				cout << *
			}
		}
};
int main()
{
	node n1(3);
	node n2(4);
	node n3(5);
	singlylinkedlist s1;
	s1.append(&n1);
	s1.append(&n2);
	s1.append(&n3);
	
	return 0;
}



