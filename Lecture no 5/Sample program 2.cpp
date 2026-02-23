#include <iostream>
using namespace std;
int main ()
{
	double amount , discount , payableAmount;
	amount = 0;
	discount = 0;
	payableAmount = 0;
	
	cout << "Enter the bill amount ";
	cin >> amount;
	
	if ( amount > 5000 )
	{
		// calculate amount at 15% discount 
		discount = amount * ( 15.0 / 100);
		payableAmount = amount - discount;
		cout << "The discount at the rate 15% is Rupees " << discount << endl;
		cout << "The payable amount is Rupees " << payableAmount << endl;
	}
	else 
	{
		// calculate amount at 10% discount 
		discount = amount * ( 10.0 / 100 );
		payableAmount = amount - discount;
		cout << "The discount at the rate 10% is Rupees " << discount << endl;
		cout << "The payable amount is Rupees " << payableAmount << endl;
	}
	return 0;
}
