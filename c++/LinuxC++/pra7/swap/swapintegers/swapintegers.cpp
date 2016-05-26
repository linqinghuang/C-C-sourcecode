#include<iostream>
using namespace std;
int main()
{
	int m=10, n=20, t;
	int *p=&m, *q=&n;
	cout << "m: "<< m << "; n :  " << n  << endl;
	t=*p;
	*p =*q;
	*q=t;
	cout << "m: " << m << "; n :  "<< n << endl;
	return 0;
}