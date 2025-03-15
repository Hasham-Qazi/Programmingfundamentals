#include <iostream>
using namespace std;
int main ()

//program 1
{
	int n=1,number;
	cout << "Enter a Number you want to print from 1 to N: ";
	cin >> number ;
	while ( n <= number )
	{
		cout << n << " ";
		n++;
	}
	return 0;
}

//program 2
//{
//	int n,i =1;
//	cout << " Enter the Number you wan to Print Table: ";
//	cin >> n ;
//	cout << "Table of " << n << " :" << endl;
//	while ( i <= 10 )
//	{
//		cout  << n << " * " << i << " = " << i*n <<endl;
//		i ++ ;
//	}
//	return 0;
//}

//program 3
//{
//	int n;
//	cout << "Enter a Number: " ;
//	cin >> n ;
//	while ( n <= 0 )
//	{
//		cout << "Error! Enter Positive Number." << endl ;
//		cin >> n ;
//	}
//	cout << "You Entered: " << n << endl;
//	return 0;
//}

//program 4
//{
//	int n =1 , sum =0 ;
//	while ( n <= 5 )
//	{
//		sum = sum + n;
//		n++;
//	}
//	cout << "Sum of First Five Natural Numbers: " << sum << endl ;
//	return 0 ;
//}

//program 5
// {
// 	int menuchoice,balance = 1000,amount;
// 	cout << "---Simple Banking System---\n" ;
// 	cout << "Select Your choice from the Menu: \n" ;
// 	while ( true )
// 	{
//		cout << "1. Deposit Money\n2. Withdraw Money\n3.Check Balance\n4. Exit\n" ;
// 		cin >> menuchoice ;
// 	 	if ( menuchoice ==1 )
// 	 	{
// 	 		cout << "Enter amount You want to Deposit: " ;
// 	 		cin >> amount ;
// 	 		balance = balance + amount ;
// 	 		cout << "Balance added.\n" ;
//	  	}
//	  	else if ( menuchoice ==2 )
// 	 	{
// 	 		cout << "Enter amount You want to Withdraw: ";
// 	 		cin >> amount ;
// 	 		if ( amount > 0 && amount <= balance )
// 			{
// 	 			balance = balance - amount ;
// 	 			cout << "Amount Withdrawn.\n" ;
// 	 		}
// 	 		else
// 	 		{
// 	 			cout << "Insufficent Account Balance.\n" ;
//			}
//		 }
//		 else if ( menuchoice == 3 )
//		 {
//		 	cout << "Your Current Balance: " << balance << endl ;
//		 }
//		 else if ( menuchoice == 4 )
//		 {
//		 	cout << "Exiting the Program: " << endl ;
//			return 0;
//		 }
//		 else
//		 {
//		 	cout << "Invalid choice! Enter a valid operation." ;
//		 }
//	}
//	return 0;
// }
