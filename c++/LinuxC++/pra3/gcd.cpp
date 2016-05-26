#include<iostream>
using namespace std;
int gcd(int a,int b);
int main()
{
	int a,b,c;
	cout << "please enter two integers: " << endl;
	cin >> a >> b;
	c=gcd(a,b);
	cout << "the gcd of the two integers is : "<< c << endl;
}
int gcd(int a,int b)
{
	int t;
	t=a<b?a:b;
	while(a%t!=0 || b%t!=0)
	{
		t--;
	}
	return t;
}
