#include<iostream>
#include<malloc.h>
using namespace std;
bool search(int *a , int x);
int main()
{	
	int i,n,x;
	cout << "enter the number of your data: \n";
	cin >> n;
	int *a = (int *)malloc(sizeof(int) * n);d
	cout << "enter these data:\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "enter the number which you want :\n";
	cin >> x;
	if(search(a,x))
		cout << "there is a \""<< x << "\" in the array\n";
	else
		cout << "there is not a \""<< x << "\" in the array\n";
}

bool search(int *a , int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		if (a[i]==x)
			return true;		
	}
	return false;

}