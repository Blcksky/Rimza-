//Smart Student Calculator System
//Calculates total, average, percentage, and grade using user input, variables, and arithmetic operators.

#include <iostream>
using namespace std;
int main ()
{
	int total , choice , subjects , marks , totalMarks , obtainedMarks;
	float average , percentage;
	char grade;
	
	cout << "----****Smart Student Calculator****----" << endl;
	cout << "What do you want to figure out? " << endl;
	cout << "1. Total Marks" << endl;
	cout << "2. Average" << endl;
	cout << "3. Percentage" << endl;
	cout << "4. Grade" << endl;
	cout << "5. All" << endl;
	cout << "Select one option" << endl;
	cin >> choice;
	
	if ( choice == 1 || choice == 2 )
	{
		cout << "Of how many subjects you want the total?" << endl;
		cin >> subjects;
		
		if (subjects <= 0)
        {
            cout << "Subjects must be greater than zero!";
            return 0;
        }
		
		total = 0;
		
		for ( int i = 1 ; i <= subjects ; i++ )
		{
			cout << "Enter the marks of subject " << i << ": ";
			cin >> marks; 
			total = total + marks;
		}
		
		cout << "Total Marks = " << total << endl;
		
		if ( choice == 2 )
		{
			average = (float)total / subjects ;
			cout << "Average = " << average;
		}
	} 
	else if ( choice == 3 || choice == 4 )
	{
		percentage = 0;
		cout << "Enter the total marks : " ;
		cin >> totalMarks;
		
		 if (totalMarks <= 0)
        {
            cout << "Total marks must be greater than zero!";
            return 0;
        }
		
		cout << "Enter the obtained marks : ";
		cin >> obtainedMarks;
		
		percentage = ( obtainedMarks * 100.0 ) / totalMarks ;
		cout << "Percentage = " << percentage << endl;
		
		if ( choice == 4 )
		{
			 if (percentage >= 80)
            	grade = 'A';
        	else if (percentage >= 70)
            	grade = 'B';
        	else if (percentage >= 60)
            	grade = 'C';
        	else if (percentage >= 50)
            	grade = 'D';
        	else
            	grade = 'F';
            
            cout << "Grade = " << grade;
		}
	}
	else if ( choice == 5 )
	{
			cout << "Of how many subjects you want the total?" << endl;
		cin >> subjects;
		
		   if (subjects <= 0)
        {
            cout << "Subjects must be greater than zero!";
            return 0;
        }
		
		total = 0;
		
		for ( int i = 1 ; i <= subjects ; i++ )
		{
			cout << "Enter the marks of subject " << i << ": ";
			cin >> marks; 
			total = total + marks;
		}
		
		average = (float)total / subjects ;
		
			percentage = 0;
		cout << "Enter the total marks : ";
		cin >> totalMarks; 
		
		 if (totalMarks <= 0)
        {
            cout << "Total marks must be greater than zero!";
            return 0;
        }
		
		percentage = ( total * 100.0 ) / totalMarks ;
		
			 if (percentage >= 80)
            	grade = 'A';
        	else if (percentage >= 70)
            	grade = 'B';
        	else if (percentage >= 60)
            	grade = 'C';
        	else if (percentage >= 50)
            	grade = 'D';
        	else
            	grade = 'F';
            
        cout << "Total Obtained Marks = " << total << endl;
        cout << "Average = " << average << endl;
        cout << "Percentage = " << percentage << endl;
        cout << "Grade = " << grade;
	}
	else 
	{
		cout << "Invalid option";
	}
}
