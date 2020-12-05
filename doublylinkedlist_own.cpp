#include<bits/stdc++.h>
using namespace std;

class node{
	private :
		node* previous;
		int key;
		int data;
		node* next;
	public :
		node()
		{
			next = NULL;
			previous = NULL;
		}
		node(int k,int d)
		{
			key = k;
			data = d;
			next=NULL;
			previous=NULL;
		}
		friend class doublylist;
};

class doublylist{
	private :
		
		node* head;
		
	public :
		
		doublylist()
		{
			head=NULL;
		}
		
		node* nodeexist(int k)
		{
			node* temp; 
			temp = head;
			if(head==NULL) 
			return NULL;
			else
			{
				while(temp->key!=k)
				{
					if(temp->next==NULL) 
					{
						
						return NULL;
					}
					
					else
					{
						temp=temp->next;
					}
				}
				 
				
				return temp;
				
			}
		}
		
		void append(node* n)
		{
			if(head==NULL)
			{
				head = n;
				
			}
			
			else if(nodeexist(n->key)!=NULL)
			{
				cout << "node already exists" << endl;
			}
			else 
			{
				node* temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=n;
				n->previous=temp;
			}
		}
		void insert(node* n,int k)
		{
			node* temp=NULL;
			temp=nodeexist(k);
			if(temp->next!=NULL)	
			{
				n->next = temp->next;
				temp->next=n;
				n->previous=temp;
				temp=temp->next;
				temp=temp->next;
				temp->previous=n;
			}
			else
			{
				append(n);
			}
		}
		void display()
		{
			node* temp;
			temp=head;
			if(head==NULL) 
			{
				cout << "list is empty" << endl;
			}
			else
			{
				while(temp->next != NULL)
				{
					cout << temp->data;
					temp = temp->next;
				}
				cout << temp->data <<endl;
			} 
		}
		void displaybyprev(node* n)
		{
			node* temp=n;
			while(temp->previous!=NULL)
			{
				cout<< temp->data << "  ";
				temp=temp->previous;
			}
			cout << temp->data << endl;
		}
};


int main()
{
	node n1(1,1),n2(2,2),n3(3,3);
	doublylist l;
	
	l.append(&n1);
	l.display(); 
	l.displaybyprev(&n1);
	cout << "display function done" <<endl << endl;
	
	l.append(&n2);
	l.display(); 
	l.displaybyprev(&n1);
	l.displaybyprev(&n2);
	cout << "display function done" <<endl << endl;
	
	l.insert(&n3,2);
	l.display(); 
	l.displaybyprev(&n1);
	l.displaybyprev(&n2);
	l.displaybyprev(&n3);
	cout <<"display function done" << endl << endl;
	
	return 0;
}
