#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int data)
		{
			this->data=data;
			next=NULL;
		}
};
class LinkedList{
	private:
		Node *header;
		Node *tail;
		int size;
		public:
		LinkedList()
		{
			header=NULL;
			tail=NULL;
			size=0;
		}
		int getsize()
		{
			return size;
		}
		void append(int data)
		{
			//create a new node
			Node *n = new Node(data);
			//there are two cases : Empty Linked List 
			//List is not empty
			if(header==NULL)
			{
				header=n;
				tail=n;
			}
			else
			{
				tail->next=n;
				tail=n;
			}
			size++;
		}
		void prepend(int data)
		{
			//create a new node
			Node *n= new Node(data);
			//If list is empty head and tail would point to created node
			if(header==NULL)
			{
				header=n;
				tail=n;
			}
			//if list is not empty temp is created and it points to same node as head
			//and increment size
			 else{
			 	Node *temp= header;
			 	header=n;
			 	n->next=temp;
			 	
			 }
			size++;
		}
		void toString()
		{
			//create a temp pointer to point to first node or what
			//header points to 
			Node *temp=header;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
		void removeFirst()
		{
			//Case 1: empty list
			//Case 2: not empty list
			//This code works only for case 2 
			if(header!=NULL)
			{
				Node *temp=header;
				header=header->next;
				delete temp;
				size--;
			}
		}
		void removeLast()
		{
			//Case 1:If list is empty
			//Case 2:1 node 
			//case 3: More than one node
			if(header->next==NULL)
			{
				removeFirst();
			}
			else if(header!=NULL)
			{
				Node *cur=header;
				Node *prev;
				while(cur->next!=NULL)
				{
					prev=cur;
					cur=cur->next;
				}
				tail=prev;
				prev->next=NULL;
				delete cur;
				size--;
			}
		}
		void removeAt(int pos)
		{
			//case 1:check for a valid postion
			if(pos>size || pos<1)
			{
				return;
			}
			else if(pos==1)
			{
				removeFirst();
			}
			else if(pos==size)
			{
				removeLast();
			}
			else if(header!=NULL)
            {
	           Node *prev;
	           Node *cur=header;
	           for(int i=1;i<pos;i++)
	           {
	           	  prev=cur;
	           	  cur=cur->next;
			   }
			   prev->next=cur->next;
			   delete cur;
			   size--;
			   
			}		
				}
				
			void insertAt(int pos,int data)
			{
			//case 1: is pos valid
			//case 3:
			//case 2:pos is 1 prepend can be used
			//case 4: cur stops at the pos 
			//prev.next=n and n.next=cur
			if(pos>size+1 || pos<1)
			{
				return;
			}
			else if(pos==1)
			{
				prepend(data);
			}
			else if(pos==size+1)
			{
				append(data);
			}
			else if(header!=NULL)
			{
			     Node *n= new Node(data);
				 Node *prev;
				 Node *cur=header;
				 for(int i=1;i<pos;i++)
				 {
				 	prev=cur;
				 	cur=cur->next;
				  }	
				  prev->next=n;
				  n->next=cur;
				  size++;
			}
			
				}	
		
		
		
		
};
int main()
{
	//if list is empty header will point to NULL or size is 0
	LinkedList list;
	list.append(1);
	list.append(2);
	list.append(3);
	list.append(4);
	list.prepend(10);
	list.toString();
	list.removeFirst();
	list.toString();
	list.insertAt(3,30);
	list.removeLast();
	list.toString();
	list.removeAt(2);
		}
