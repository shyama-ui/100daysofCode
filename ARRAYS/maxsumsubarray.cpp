#include <iostream>
#include <climits>
using namespace std;

int main()
{
	//Subarrays-Contiguous part of an array
	//Make a starting point and an ending point 
	int sum;
	int n;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=0;
			//print the elements in between
			for(int k=i;k<=j;k++)
			{
				sum+=arr[k];
			}
			maxSum=max(maxSum,sum);
		}
	}
	cout<<maxSum<<endl;
	//let us take a sample array
	//4 7 -4 3
	//Here the subarrays are 4   4,7   4,7,-4   4,7,-4,3  7  7,-4  7,-4,3 
	//-4  -4,3  3
	//There is a starting point which is 0 to n-1 and ending point starts from i so it goes till n-1
	 
}
