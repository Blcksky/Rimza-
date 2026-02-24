//This program allows a user to guess a cahracter from a to z.
#include<iostream>
using namespace std;
int main ()
{
	char alphabet = 'f' , guess;
	int tries = 1;
	
	cout << "Guess character from a to z" << endl;
	cout << "There are a total of five tries" << endl;
	
	do
	{
		cout << " Try " << tries << ":" << endl;
		cin >> guess;
		
		if ( guess == alphabet )
		{
			cout << "Congratulations! you guessed correctly. " << endl;
			break;
		}
		
		else
		{
			cout << "Wrong guess" << endl;
		}
		tries++;
	}
	
	while ( tries <= 5 );
	{
		if ( guess != alphabet)
		{
			cout << "Sorry you used all 5 tries" << endl;
		}
	}
	return 0;
}
