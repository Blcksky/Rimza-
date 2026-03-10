// Example : analysis of text using <ctype.h> library
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char c;
	int i = 0, lowerCase = 0, upperCase = 0, digit = 0, whiteSpace = 0, punc = 0, other = 0;
	cout << "Please enter a character string and then press ENTER: ";
	
	while ( (c = cin.get())!= '\n')
	{
		if(islower(c))
			lowerCase++;
		else if ( isupper(c))
			upperCase++;
		else if (isdigit(c))
			digit++;
		else if ( isspace(c))
			whiteSpace++;
		else if ( ispunct(c))
			punc++;
		else 
			other++;
	}
	// display 
	cout << "You typed: " << endl;
	cout << "Lower case letters = " << lowerCase << endl;
	cout << "Upper case letters = " << upperCase << endl;
	cout << "Digits = " << digit << endl;
	cout << "White space = " << whiteSpace << endl;
	cout << "Punctuation = " << punc << endl;
	cout << "Other = " << other << endl;
	
	return 0;   
}
