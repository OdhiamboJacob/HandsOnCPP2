#include <iostream>
using std::cout;
using std::cin;
int fib(int a)
{
	if(a==0)
	{
		return a;
	}
	if(a==1)
	{
		return a;
	}
	else
	{
		return fib(a-1)+fib(a-2);
	}
}
int main()
{
	int a, i=0;
	cout<<"enter the number of terms in the siries :";
	cin>>a;
	cout<<"\nFibonacci siries in the given range is:";
	while(i<=a)
	{
		cout<<","<<fib(i);
		i++;
	}
}
