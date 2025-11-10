#include <iostream>
using namespace std;	
int main()
{
	double marks;
	char grade;

	cout << "Enter your marks: ";
	cin >> marks;

	if (marks >= 80 && marks <= 100)
		grade = 'A';
	else if (marks >= 65 && marks <= 79)
		grade = 'B';
	else if (marks >= 50 && marks <= 64)
		grade = 'C';
	else
		grade = 'F';

	cout << "Your mark is: " << marks << "," << "Your grade is:" << grade << endl;
	return 0;
}
