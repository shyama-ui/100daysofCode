#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int counter=1;
while(counter<n)
{
	for(int i=0;i<n-counter;i++)
	{
		if(arr[i]>arr[i+1])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	counter++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		}	
		cout<<endl;
}
//Repeatedly swap two adjacent elements if in wrong order
//In one complete traversal of array the highest is obtained at the end
//traverse from 0 to n-1 for next 

