//This program demonstrates that when an array is passed to a function then it is a call by
//reference and the changes made by the function effects the original array

#include <iostream>
using namespace std;
void getValues ( int x[] , int y )
{
	for ( int i = 0 ; i < y ; i++)
	{
		x[i] = i;
	}
}
int main ()
{
	
	int num[5] ; 
	
	getValues( num , 5);
	
	cout << "The array is populated with values" << endl;
	
	for ( int i = 0 ; i < 5 ; i++ )
	{
		cout << "num[" << i << "] = " << num[i] << endl; 
	}
	
}
