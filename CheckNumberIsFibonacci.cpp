/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

bool isPefectSquares(int b)
{
    int s=sqrt(b);
    return (s*s==b);
}
bool isFibonacci(int a)
{
    return isPefectSquares(5*a*a-4) || isPefectSquares(5*a*a+4);
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       isFibonacci(i)?cout<<i<<" is a is a Fibonacci number\n" : cout<<i<<" is not a Fibonacci number\n";
       
    }
    return 0;
}
