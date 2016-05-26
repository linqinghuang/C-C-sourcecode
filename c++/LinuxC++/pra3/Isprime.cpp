#include<iostream>
using namespace std;
bool IsPrime(int n);
int main()
{
	int a;
	cout << "please enter the integes: " << endl;
	cin >> a;
	if(a<2)
	cout << "Error"<<endl;
	if(!IsPrime(a))
	cout << "this integer is not Prime.\n";
	else
	cout << "this integer is Prime.\n";
	return 0;	
}
bool IsPrime(int n)
{
	int i;
	for(i=2;i<n/2+1;i++)
	{
		if(n%i==0)
		{
			return false;
		}
		return true;
	}


}

