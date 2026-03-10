// This program  deomnstrate the use of atoi function
#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	int anInteger;
	char myInt[20];
	cout << "Enter an integer between 10-100 : ";
	cin >> myInt;
	
	if ( atoi(myInt) == 0 )
	{
		cout << "\n Error : Not a valid input";
	}
	else 
	{
		anInteger = atoi(myInt);
		if( anInteger < 10 || anInteger > 100 )
		{
			cout << "\n Error : only integers between 10 - 100 are allowed!";
		}
		else 
		{
			cout << "\n Ok, you have entered " << anInteger;
		}
	}
	return 0;
}
