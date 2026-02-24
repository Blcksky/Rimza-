// This program gets salary input from user and calculates and displays the net payable
// amount after deduction according the conditions 
#include <iostream>
using namespace std;
int main ()
{
	int salary;
	float deduction , netPayable;
	
	cout << "Enter the salary : ";
	cin >> salary;
	
	switch ( salary / 10000 )
	{
		case 0: 
			deduction = 0;
			break;
		case 1:
			deduction = 1000;
			break;
		default:
			deduction = salary * 7 / 100;
	}
	netPayable = salary - deduction;
	cout << "Calculation: " << salary << "-" << deduction << "=" << netPayable << endl;
	cout << "Net Payable Amount: " << netPayable << endl;
	return 0;
}
