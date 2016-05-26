#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k,l,x,y;
	cout << "please enter the numbers of lines: "<<endl;
	cin >> n;
	cout << "please enter the numbers of space: " <<endl;
	cin >> m;
	for(i=1;i<=n;i++)
	{
			for(k=1;k<=n-i;k++)
			cout << " ";
			for(l=1;l<=(2*i-1);l++)
			cout << "*";
			for(x=1;x<=m;x++)
			cout << " ";
			for(y=1;y<=(2*(n-i+1)-1);y++)
			cout << "*";
			cout << "\n";
	}
}
