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
			//there are two cases : Emoty Linked List 
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
};
int main()
{
	//if list is empty header will point to NULL or size is 0
	LinkedList list;
	list.append(1);
	list.append(2);
	list.append(3);
	list.prepend(10);
	list.toString();
	}
