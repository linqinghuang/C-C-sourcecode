#include<iostream> 
#include<iomanip>
using namespace std;
typedef enum {SUN,MON,TUE,WEN,THU,FRI,STA} WEEKDAY; 
int main()
{
	int i=1;
	const WEEKDAY date_1 =FRI;
	WEEKDAY weekday;
	cout << "Calendar 2016-01\n"; 
	cout << "----------------------------\n"; 
	cout << "  Su  Mo  Tu  We  Th  Fr  St  \n"; 
	cout << "----------------------------\n";
	weekday = (WEEKDAY)((i + (int)date_1 - 1)%7);
	cout << setw(22) << i;
	for(i=2;i<=31;i++)
	{
		weekday = (WEEKDAY)((i + (int)date_1 - 1)%7);
		if(weekday == SUN ) cout << setw(4) << i;
		else if(weekday == MON ) cout << setw(4) << i;
		else if(weekday == TUE ) cout << setw(4) << i;
		else if(weekday == WEN ) cout << setw(4) << i;
		else if(weekday == THU ) cout << setw(4) << i;
		else if(weekday == FRI ) cout << setw(4) << i;
		else if(weekday == STA ) cout << setw(4) << i << endl;
		 
			
	}
	
	return 0;
}
