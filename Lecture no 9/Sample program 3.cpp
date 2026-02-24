// This program is calling a function to test the given number is even or not
#include <iostream>
using namespace std;
bool isEven (int number)		// function to check even number
{
	if ( number % 2 == 0 )
		return true;
	
	else 
		return false;
}
int main ()
{
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	if ( isEven( number ))
		cout << "The number is even." << endl;
	else
		cout << "The number is odd." << endl;
	return 0;
}
