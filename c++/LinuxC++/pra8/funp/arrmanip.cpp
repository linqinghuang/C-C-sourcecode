#include<iostream>
using namespace std;
#include"random.h"
#include"arrmanip.h"
static const unsigned int Lower_bound = 10;
static const unsigned int Upper_bound = 99;

#include<ctime>
#include<cstdlib>
#include<iomanip>

void Randomize()
{
	srand((int)time(0));
}

void GenerateINtegers(int a[],unsigned int n)
{
	unsigned int i;
	Randomize();
	for(i=0;i < n;i++)
		a[i] = GenerateRandomNumber(Lower_bound,Upper_bound);
}

int CompareInteger(int x,int y)
{
	if(x>y)
		return 1;
	else if(x==y)
		return 0;
	else 
		return -1;
}

void PrintIntergers(int a[],unsigned int n)
{
	unsigned int i;
	for(i =0;i<n;i++)
		cout << setw(3) << a[i];
	cout <<endl;
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