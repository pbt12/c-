#include<bits/stdc++.h>
using namespace std;

class node{
	private :
		int key;
		int data;
		node* next;
	public :
		node ()
		{
			key=0;
			data=0;
			next=NULL;
		}
		node(int k,int value) 
		{
			key = k;
			data = value;
			next=NULL;
		}
		
		friend class list1;
};

class list1{
	private :
		node* head;
	public :
		list1()
		{
			head = NULL;
		}
		list1(node* n1)
		{
			head=n1;
		}
		
		bool nodeExist1(int k)
		{
			
			node* temp=head;
			while(temp->key!=k)
			{
				if(temp->next==NULL)
				{
					cout << "nodeexist function has ended virtually!" << endl;
					return false;
					break;
				}
				else 
				temp=temp->next;
			}
			cout << "but still continued" << endl;
			if(temp->next != NULL)
			{
				return true;
			}
			else 
			return false;	
		}
			
		void append1(node* n2)
		{			cout << "append function called " << endl;

			if( nodeExist1(n2->key) )
			{
				cout << "node alredy exist! " << endl;
			}
			else 
			{
				node* temp;
				temp = head;
				while (temp->next != NULL)
				{
					temp = temp->next;
				}
				temp->next= n2;
			}
		}     
		                               
		void prepend(node* n3)
		{
			cout << "prepend function called " << endl;

			n3->next=head;
			head=n3;
		}
		
		void insert1(int k,node* n3)
		{
			cout << "insert function called " << endl;
			node* temp=head;
			
			if(temp->key!=k)
			{
				temp=temp->next;
				
			}
			
			if(temp->next==NULL)
			{
				cout << "node doesnot exist in the list !" << endl;
			}
			
			else 
			{
				n3->next=temp->next;
				temp->next=n3;
			}
		}
		
		void display()
		{
			cout << "display function called " << endl;

			int n;
			node* temp=head;
			cout << "the list is = ";
			while(temp->next!=0)
			{
				cout << temp->data << "  ";
				cin >> n;
				temp = temp -> next;
			}
			cout << temp->data << "  " << endl; 
		}
		
};

int main()
{
	node n1(1,1),n2(2,2),n3(3,3);
	list1 l(&n1);
	l.display();
	l.append1(&n2);
	l.display();
	l.prepend(&n3);
	l.display();
	node n4(4,4);
	l.insert1(4,&n4);
	l.display();
	l.insert1(3,&n4);
	l.display();
	return 0;
}
