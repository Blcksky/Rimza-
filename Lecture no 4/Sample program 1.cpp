//This program calculates the average age of a class of ten students after prompting the user to enter the age of each student.
#include <iostream>
using namespace std;
int main()
{
	int age;
	int totalAge = 0;
	float averageAge;
	for (int i = 1 ; i <= 10 ; i++)
	{
		cout << "Enter the age of studnet " << i << endl;
		cin >> age;
		totalAge = totalAge + age;
	}
	cout << "total age of students is " << totalAge << endl;
	averageAge = totalAge / 10.0;
	cout << "average age of students is " << averageAge << endl;
	return 0;
}
