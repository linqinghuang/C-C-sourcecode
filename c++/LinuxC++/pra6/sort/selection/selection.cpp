#include<iostream>
#include<malloc.h>
using namespace std;
void Sort(int *a,int n);
int main()
{
	int i,n,x;
	cout << "enter the number of your data: \n";
	cin >> n;
	int *a = (int *)malloc(sizeof(int) * n);
	cout << "enter these data:\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	Sort(a , n);
	cout << "after the sort:\n";
	for(i=0;i<n;i++)
	{
		cout << a[i]<< ",";
	}
	return 0;
}
	
void Sort( int *a , int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		if(a[i] > a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;//a[0] is the least value after the first loop
		}
	}
}
