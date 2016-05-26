#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include"random.h"
#include"arrmainip.h"
static const unsigned int Lower_bound = 10;
static const unsigned int Upper_bound = 99;
using namespace std;
void Randomize()
{
	srand((int)time(0));
}

int GenerateRandomNumber(int low, int high)
{
	double _d;
	if(low>high)
	{
		cout << "GenerateRandomNumber: Make sure low <= high.\n";
		exit(1);
	}
	_d = (double)rand()/((double)RAND_MAX + 1.0);
	return low + (int)(_d * (high -low +1));
}

void GenerateIntegers(int *p,unsigned int n)
{
	unsigned int i;
	Randomize();
	for(i=0;i<n;i++)
		*p++=GenerateRandomNumber(Lower_bound,Upper_bound);
}

void ReverseIntegers(int *p,unsigned int n)
{
	unsigned int i;
	for(i=0;i<n/2;i++)
		Swap(p+i,p+n-i-1);
}

void Swap(int *p, int *q)
{
	int t; t=*p; *p=*q; *q=t;
}

void PrintIntegers(const int *p,unsigned int n)
{
	unsigned int i;
	for(i=0;i<n;i++)
		cout << setw(4) << *(p+i);
	cout << endl;
}
