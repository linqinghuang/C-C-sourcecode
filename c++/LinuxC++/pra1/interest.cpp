#include<iostream>
using namespace std;
int main()
{
	float a,b,sum;
	cout << "please enter the principal: "<<endl;
	cin >> a;
	cout << "please enter the interest: "<< endl;
	cin >> b;
	sum=a+a*b/100;
	cout << "the total money you can get is: "<<sum<<endl;
	
}
