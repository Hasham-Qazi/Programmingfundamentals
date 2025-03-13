#include<iostream>
using namespace std;
int main()
//program 1
//{
//	int number;
//	cout << "Enter a Number: ";
//	cin >> number;
//	if( number > 0 )
//	cout << "The Number is Positive.\n";
//	if( number < 0 )
//	cout << "The number is Negative.\n";
//	return 0;
//}

//program 2
//{
//	int number;
//	cout << "Enter a Number: ";
//	cin >> number;
//	if ( number % 2 == 0 )
//	{
//		cout << "Number is Even.\n";
//	}
//	if ( number % 2 != 0 )
//	{
//		cout << "Number is Odd.\n";
//	}
//	return 0;
//}

//program 3
//{
//	int num1,num2,num3,largest;
//	cout << "Enter Three number: ";
//	cin >> num1 >> num2 >> num3;
//	if( (num1 > num2) && (num1 > num3) ) 
//	{
//		largest = num1;
//	}
//		if( (num2 > num1) && (num2 > num3) ) 
//	{
//		largest = num2;
//	}
//		if( (num3 > num1) && (num3 > num2) ) 
//	{
//		largest = num3;
//	}
//	cout << "Largest Number: " << largest << endl;
//	return 0;
//}

//program 4
//{
//	int marks;
//	cout << "Enter your Marks(Tota Marks = 100): ";
//	cin >> marks;
//	if ( marks>=90 )
//	{
//		cout << "Grade A+";
//	}
//	if ( (marks < 90) && (marks>=80) )
//	{
//		cout << "Grade A";
//	}
//	if ( (marks < 80) && (marks>=70) )
//	{
//		cout << "Grade B";
//	}
//	if ( (marks < 70) && (marks>=60) )
//	{
//		cout << "Grade C";
//	}
//	if ( marks < 60 )
//	{
//		cout << "Fail";
//	}
//	cout << endl;
//	return 0 ;
//}

//program 5
//{
//	char SignalColour;
//	cout << "Enter the Colour of the Signal(R for Red, G for Green, Y for Yellow): ";
//	cin >> SignalColour;
//	if( SignalColour == 'R' || SignalColour == 'r' )
//	{
//		cout << "Stop\n";
//	}
//	if( SignalColour == 'G' || SignalColour == 'g' )
//	{
//		cout << "Start\n";
//	}
//	if( SignalColour == 'Y' || SignalColour == 'y' )
//	{
//		cout << "Slow Down\n";
//	}
//	return 0;
//}

//program 6
//{
//	int basicsalary,netsalary,grosssalary;
//	int bonus,tax,yearofservice;
//	char grade;
//	cout << "Enter your Grade: " ;
//	cin >> grade;
//	if ( grade == 'A' || grade == 'a' )
//	{
//		basicsalary = 50000 ;
//	}
//	if ( grade == 'B' || grade == 'b' )
//	{
//		basicsalary = 30000 ;
//	}
//	if ( grade == 'C' || grade == 'c' )
//	{
//		basicsalary = 20000 ;
//	}
//	
//	if( yearofservice >= 10 )
//	{
//		bonus = basicsalary * 0.10 ;
//	}
//	if( yearofservice >= 5 && yearofservice <= 9 )
//	{
//		bonus = basicsalary * 0.05 ;
//	}
//	if( yearofservice < 5 )
//	{
//		bonus = basicsalary * 0 ;
//		cout << "No Bonus...\n" ;
//	}
//	
//	grosssalary = basicsalary + bonus ;  //gross salary formula

//	if( grosssalary > 40000 )
//	{
//		tax = grosssalary * 0.20 ;
//	}
//	if( grosssalary >= 30000 && grosssalary <= 40000 )
//	{
//		tax = grosssalary * 0.10 ;
//	}
//	if( grosssalary < 30000 )
//	{
//		tax = grosssalary * 0 ;
//	}
//	
//	netsalary = grosssalary - tax ;
//	cout << "Basic Salary: $" << basicsalary <<endl ;
//	cout << "Bonus Applied: " << bonus << endl ;
//	cout << "Bonus Applied Salary: $" << grosssalary << endl ;
//	cout << "Tax Deducted: " << tax << endl ;
//	cout << "Net Salary of One Month: $" << netsalary << endl ;
//	return 0 ;
//}

//program 7 Using if-else
//{
//	int accountbalance,withdrawalamount;
//	cout << " Enter the Account Balance: " ;
//	cin >> accountbalance ;
//	cout << "Enter the Withdrawal Amount: " ;
//	cin >> withdrawalamount ;
//	if( withdrawalamount <= accountbalance )
//	{
//		accountbalance = accountbalance - withdrawalamount ;
//		cout << "Amount Deducted: " << withdrawalamount << endl ;
//		cout << "Current Balance: " << accountbalance << endl ;
//	}
//	else
//	{
//		cout << "Insufficent Balance. " << endl ;
//	}
//	return 0;
//}

//program 8
{
	int salary,yearofservice;
	cout << "Enter your Salary: $";
	cin >> salary;
	cout << "Enter your Year of Service: ";
	cin >> yearofservice;
	if( salary >= 25000 )
	{
		cout << "You are Eligible for Loan. " << endl ;
	}
	else if( salary >= 20000 && yearofservice > 5)
	{
		cout << "You are Eligible for Loan. " << endl ;
	}
	else
	{
		cout << "You are not eligible for loan. " <<endl ;
	}
	return 0 ;
}	

