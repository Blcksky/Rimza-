#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout << "Please enter your grade: " << endl;
	cin >> grade;
	
	switch ( grade )
	{
		case 'A':
		case 'a':
		cout << "Excellent ";
		break;
		
		case 'B':
		case 'b':
		cout << "Very Good";
		break;
		
		case 'C':
		case 'c':
		cout << "Good";
		break;
		
		case 'D':
		case 'd':
		cout << "Poor";
		break;
		
		case 'F':
		case 'f':
		cout << "Fail";
		break;
		
		default:
		cout << "Enter the grade from A to D or F";
	 } 
	 return 0;
}
