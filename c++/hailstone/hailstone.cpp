#include<iostream>
using namespace std;
int hailstone(int n);
int main()
{
	int a;
	cin>>a;
	hailstone(a);
	return 0;
}
int hailstone(int n)
{
	int length =1;
	while(1<n){(n % 2) ? n=3*n+1 : n /= 2;length++;}
	cout<<"length is "<<length<<endl;
	return length;
}
