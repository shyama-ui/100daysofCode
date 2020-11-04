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
	int currsum[n+1];
	currsum[0]=0;
	for(int i=1;i<=n;i++)
	{
		currsum[i]=currsum[i-1]+arr[i-1];
	}
	int maxSum=INT_MIN;
	for(int i=1;i<=n;i++)//position ends at
	{
		int sum=0;
		for(int j=0;j<i;j++)//prefix sums to be subtracted
		{
			sum=currsum[i]-currsum[j];
			maxSum=max(sum,maxSum);
		}
	}
	cout<<maxSum; 
}
