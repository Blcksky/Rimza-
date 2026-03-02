// This program takes two arrays of 5 integers from user
//displays them and after comparing them displays the result
#include <iostream>
using namespace std;
int main()
{
	int arr1 [3] , arr2 [3] , i , equals = 0;
	
	cout << "Enter three integers for first array" << endl;
	
	// taking input
	for ( i = 0 ; i < 3 ; i++ )
	{
		cin >> arr1 [i];
	}
	
	cout << "\nEnter three integers for second array" << endl;
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		cin >> arr2 [i];
	}
	// displaying the elements of both arrays
	
	cout << "The values in first array are : ";
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		cout << "\t" << arr1[i];
	}
	
	cout << "\nThe valuse of second array are : " ;
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		cout << "\t" << arr2[i];
	}
	// comparing the two arrays
	
	for ( i = 0 ; i < 3 ; i++ )
	{
		if ( arr1[i] != arr2[i] )
		{
			cout << "\nThe arrays are not equal" << endl ;
			equals = 0;
			break;
		}
		equals = 1;
	}
	if ( arr1[i] == arr2[i])
	{
		cout << "\nArrays are equal";
	}
	return 0;
}
