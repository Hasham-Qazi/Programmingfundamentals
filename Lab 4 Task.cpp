#include<iostream>
using namespace std;
int main()

//Program 1
//{
//	int number;
//	cout << "Enter the Number: " ;
//	cin>>number;
//	( number/2 == 0 ) ? cout << "Number is Even.\n" : cout << "Number is odd.\n";
//	return 0;
//}

//program 2
//{
//	int age;
//	cout << "Enter the Age: ";
//	cin >> age;
//	(age < 13) ? cout<< "Child.\n" : ((age >= 13) && (age <= 19))? cout << "Teenager.\n" : cout << "Adult.\n";
//	return 0;
//}

//program 3
{
	float accountbalance ;
	bool isLoyal ;
	string accounttype;
	cout << "Enter your Account Balance: $" ;
	cin >> accountbalance ;
	cout << "Are you a Loyal Customer?(1 for Yes, 0 for No): ";
	cin >> isLoyal;
	accounttype = (accountbalance < 100 ) ? "Low Balance Account" : ((accountbalance >= 100 && accountbalance <=500)? "Standard Account." : "Premium Account" );
	( accountbalance < 100 && isLoyal ) ? "Eligible For Speicial Offer.\n" : "Not Eligible for Special Offer.\n";
	
	cout << "Account Balance: $" << accountbalance << endl ;
	cout << "Account Type: " << accounttype << endl ;
	return 0;
}
