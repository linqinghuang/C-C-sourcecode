#include<iostream>
#include<malloc.h>
using namespace std;
void bubble(int *a,int n);
int main()
{
	int i,n;
	cout << "enter the number of your data: \n";
	cin >> n;
	int *a = (int *)malloc(sizeof(int) * n);
	cout << "enter these data:\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	bubble(a , n);
	cout << "after the sort:\n";
	for(i=0;i<n;i++)
	{
		cout << a[i]<< ",";
	}
	return 0;
}
	
void bubble( int *a , int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		if(a[j] > a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
