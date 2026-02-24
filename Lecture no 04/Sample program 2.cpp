// A progaram that takes a four digits integer from user and shows the digits on the screen separately.
#include <iostream>
using namespace std;
int main()
{
	int num , digit;
	
	cout << "Enter 4-digit number: " ;
	cin >> num;
	
	digit = num % 10;
	cout << "The digits are " << digit << ",";
	
	num = num / 10;
	digit = num  % 10;
	cout << digit << ",";
	
	num = num / 10;
	digit = num % 10;
	cout << digit << ",";
	
	num = num / 10;
	digit = num % 10;
	cout << digit;
	return 0;
	
}
