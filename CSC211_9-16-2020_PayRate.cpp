#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// Number of Employees
	const int NUM_EMPLOYEES = 5;
	
	//=====================================================================================================================
	// 											Edited Code for SSNs and Employee Names.
	
	// Array for SSNs
	string SSN[] = {"SSN: 037-58-9183", "SSN: 411-81-4807" , "SSN: 227-81-7400", "SSN: 631-30-1437", "SSN: 594-06-3762"};
	
	// Array for Names
	string names[] = {"Chad M Vasser", "Elsa D Meza", "Amy K Sullivan", "Salvatore J Barber", "Raymond M Satterfield"};
  
	//=====================================================================================================================
  
	// Vector of Integers
	vector<int> hours (NUM_EMPLOYEES);
	
	// Vector of doubles
	vector<double> payRate(NUM_EMPLOYEES);
	
	// Loop counter
	int index;
	
	// Input the data.
	cout << "Enter the hours worked by " << NUM_EMPLOYEES;
	cout  << " Empolyees and their hourly rates." << endl;
	
	/* 
		To Produce a different name each time, I created an SSN and Name String Array.
		Originally it was a looping for statement with a lot of embedded if statements,
		but by using string arrays, I can make the adding of different names and SSNs 
		streamlined with less time.
	*/
	
	for (index = 0; index < NUM_EMPLOYEES; index ++)
	{
		cout << "Hours worked by " << names[index] << endl << SSN[index] << endl;
			
			cin  >> hours[index];
			
			cout << "Hourly pay rate for " << names[index] << endl;
			cin  >> payRate[index];
	}
	
	// Display Each Employee's gross pay.
	
	cout << endl << "Here's the gross pay for each employee:" << endl;
	cout << fixed << showpoint << setprecision(2);
	
	for (index = 0; index < NUM_EMPLOYEES; index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout << names[index] << ", " << SSN[index] << endl;
		cout << "$" << grossPay << endl;
	}

	return 0;
}