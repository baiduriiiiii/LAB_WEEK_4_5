#include <iostream>
using namespace std;
int main()
{
	double height;
	double weight;	
	double bmi;
	string status;

	cout << "Enter your height (in m): ";
	cin >> height;
	cout << "Enter your weight (in kg): ";
	cin >> weight;
	bmi = weight / (height * height);

	if (bmi < 18.5)
	{
		status = "Underweight";
	}
	else if (bmi >= 18.5 && bmi < 25)
	{
		status = "Normal";
	}
	else if (bmi >= 25 && bmi < 30)
	{
		status = "Overweight";
	}
	else
	{
		status = "Obese";
	}
	cout << "Your BMI is " << bmi << endl;
	cout << "Status: " << status << endl;
	return 0;
}
