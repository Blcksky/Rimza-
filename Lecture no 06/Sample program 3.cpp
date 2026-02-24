#include <iostream>
using namespace std;
int main()
{
	int num1 , factorial;
	
	cout << "\n----**** Factorial Series ****----\n" << endl;
	
	cout << "Enter a positive integer for which you want the factorial series" << endl;
	cin >> num1;
	
	int num = num1;
	factorial = 1;
	
	while ( num > 0 )
	{
		factorial = num * factorial;
		num = num -1;
	}
	cout << "Factorial of " << num1 << "is " << factorial << endl;
	
	return 0;
}
