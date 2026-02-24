// This program checks the age of Amer and Amara's and displays the appropriate message.
#include <iostream>
using namespace std;
int main()
{
	int amerAge , amaraAge;
	
	cout << "Enter Amer's age ";
	cin >> amerAge;
	
	cout << "Enter Amara's age ";
	cin >> amaraAge;
	
	if ( amaraAge > amerAge )
	{
		cout << "Amara is older than Amer";
	}
	else if ( amaraAge == amerAge) 
	{
		cout << "Both are of same age";
	}
	else 
	{
		cout << "Amer is older than Amara";
	}
	return 0;
}
