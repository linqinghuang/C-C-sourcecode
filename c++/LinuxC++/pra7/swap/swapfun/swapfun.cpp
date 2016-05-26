#include<iostream>
using namespace std;
void swap(int *x ,int *y);
int main()
{
	int m=10, n=20, t;
	int *p=&m, *q=&n;
	swap( p,q);
	return 0;
}

void swap(int *x, int *y)
{
	int t;
	if(!x || !y)
	{
		cout << "swap: parameter(s) illegal." << endl;
	}
	#ifndef NDEBUG
		cout << "Swap (before swapped): *x = " << *x << ";*y =" << *y << endl;
	#endif
	t=*x;
	*x=*y;
	*y=t;
	#ifndef NDEBUG
		cout << "Swap (after swapped):: *x = " << *x << ";*y =" << *y << endl;
	#endif
}