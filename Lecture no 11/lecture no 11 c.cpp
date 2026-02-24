// This program is used to find a number from the array. 
#include <iostream>
using namespace std;
int main ()
{
	int a , i ;
	bool found = false;
	int arr[100];
	
	for ( i = 0; i < 100 ; i++ )
	{
		arr[i] = i;
	}
	
	cout << "Enter an intger to search for (0-99): ";
	cin >> a;
	
	int foundIndex = -1;     // store the index here for cleaner output 
	
	for ( i = 0; i < 100; i++ )
	{
		if ( a == arr[i] )
		{
			found = true;
			foundIndex = i;
			break;         // stop searching once found 
		}
	}
	if ( found )
	cout << "Success! Found  " << a << " at index " << foundIndex << endl;
	
	else
		cout << "Sorry, " << a << " was not found in the array." << endl;
	return 0; 
}
