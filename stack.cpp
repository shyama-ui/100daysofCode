#include <iostream>
#include <string>
using namespace std;
class Stack{
	private:
		int top;
		int arr[5];
	public:
		Stack()
		{
		   top=-1;//top is used to keep track of number of entries wrt to index
		   for(int i=0;i<5;i++)
		   {
		   	arr[i]=0;//initialsing all elements to 0
		   	
			}	
		}
		bool isEmpty()
	{
		if(top==-1)
		{
			return true;
		}
		else{
			return false;
		}
	}
	bool isFull()
	{
	   if(top==4)
	   {
	   	return true;
		}	
		else
		{
		return false;
		}
	}
	void push(int val)
	{
		if(isFull())
		{
			cout<<"Stack Overflow"<<endl;
		}
		else{
			top++;//for first time top becomes 0
			arr[top]=val;//arr[0]=val
		}
	}
	int pop()
	{
	  if(isEmpty())
	  {
	  	cout<<"Stack underflow"<<endl;
	  }
	  else{
	  	int popvalue=arr[top];
	  	arr[top]=0;//removed so make it 0
	  	top--;//decrement top
	  	return popvalue;//value is popped out
	  }	
	}
	int count()
	{
		return(top+1);
	}
	int peek(int pos)
	{
	   	if(isEmpty())
	   	{
	   	cout<<"Stack undeflow"<<endl;	
		}
		else{
			return arr[pos];
		}
	}
	void change(int pos,int val)
	{
		arr[pos]=val;
		cout<<"Item changed at location"<<pos<<endl;
	}
	void display()
	{
		if(isEmpty())
    {
	cout<<"Stack is empty"<<endl;
	}
	else
	{
		for(int i=4;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
	}
	}
	
};

int main()
{
	Stack s1;
	int option,position,value;
	do{
		cout<<"What operation do you wanna perform? Enter 0 to exit"<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. Clear Screen"<<endl<<endl;
		
	
	cin>>option;
	switch(option)
	{
		case 0:
		break;
		case 1: 
		cout<<"Enter an item to push in the stack"<<endl;
		cin>>value;
		s1.push(value);
		break;
		case 2:
		cout<<"Pop function called and pop value is "<<s1.pop()<<endl;
		break;
		case 3:
			if(s1.isFull())
            {
	          cout<<"Stack is full"<<endl;
			}
			else{
				cout<<"Stack is not full"<<endl;
			}
			break;
		case 4:
			if(s1.isFull())
            {
	         cout<<"Stack is full"<<endl;
			}				
			else
			{
			cout<<"Stack is not full"<<endl;	
			}
			break;
		case 5:
		cout<<"Enter position of item you want to peek:"<<endl;
		cin>>position;
		cout<<"Peek function called "<<endl<<s1.peek(position)<<endl;
		break;
		case 6:
		cout<<"The number of items in the stack are "<<s1.count()<<endl;
		break;
		case 7:
		cout<<"Change Function is going to be called"<<endl;
		cout<<"Enter the position where item has to be changed"<<endl;
		cin>>position;
		cout<<endl;
		cout<<"Enter the value of item to be updated"<<endl;
		cin>>value;
		s1.change(position,value);
		break;
		case 8:
		cout<<"The items in the stack are"<<endl;
		s1.display();
		break;
		case 9:
			system("cls");
			break;
		default:
		cout<<"Enter correct option value"<<endl;		
		}
	}while(option!=0);
	return 0;	 
}

    //1.push() - Place an item on to the stack if the stack does not have place for new item  it is overflow state
	//2.pop() - Returns the item at the top of the stack and size is reduced by 1 , it cannot be called when stack is empty (underflow state)
	//3.isEmpty() - Tells if the stack is empty or not
	//4.isfull() - Tells if the stack is full or not
	//5.peek()- Access the item at position i
	//6.count()- get the count of items in the stack
	//7.change()- change the value at position i
	//8.display()- display all the items in the stack
	/*
	Applications of stack :
	Balancing of symbols 
	Infix to postfix/prefix
	Redo/undo
	forward/backward
	cache memory
	*/
	
