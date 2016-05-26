#include<iostream>
#include"arrmainip.h"
using namespace std;
#define NUMBER_OF_ELEMENTS 8
const int Lower_bound = 10;
const int Upper_bound = 99;

int main()
{
	int a[NUMBER_OF_ELEMENTS];
	GenerateIntegers(a,NUMBER_OF_ELEMENTS,Lower_bound,Upper_bound);
	cout << "Array generated at random as follows: \n";
	PrintIntegers(a,NUMBER_OF_ELEMENTS);
	ReverseIntegers(a,NUMBER_OF_ELEMENTS);
	cout << "After all elements of the array reversed: \n";
	PrintIntegers(a,NUMBER_OF_ELEMENTS);
	return 0;
}
