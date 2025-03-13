#include <iostream>
using namespace std;
int main()
//program 1
//{
//	int n;
//	cout << "Enter a Number you want to print from 1 to N: ";
//	cin >> n ;
//	for ( int i = 1 ; i <= n ; i++ )
//	{
//		cout << i << " ";
//	}
//	return 0;
//}

//program 2
//{
//	int n;
//	cout << " Enter the Number you wan to Print Table: ";
//	cin >> n ;
//	for ( int i =1 ; i <= 10 ; i++ )
//	{
//		cout  << n << " * " << i << " = " << i*n <<endl;
//	}
//	return 0;
//}

//program 3
//{
//	int n,sum = 0;
//	for ( n = 1 ; n <= 5 ; n++)
//	{
//		sum = sum + n;
//	}
//	cout << " Sum of first five Natural Numbers: " << sum << endl;
//	return 0;
//}

//program 4 part 1
//{
//	int n,m;
//	for( n = 1 ; n <= 4 ; n++ )
//	{
//		for ( m = 1 ; m <= 5 ; m++ )
//		{
//			cout << " * ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//program 4 part 2
//{
//	int n,m;
//	for( n = 4 ; n >= 1 ; n-- )
//	{
//		for ( m = 1 ; m <= 5 ; m++ )
//		{
//			cout << " * ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
{
	int n;
	double fact = 1;
	cout << "Enter a number you want to print factorial: ";
	cin >> n ;
	if ( n < 0 )
	{
		cout << "Factorial of negative number is not defined." << endl;
	}
	else
	{
		for( int i = 1 ; i <= n ; i++ )
		{
			fact = fact * i ;
		}
		cout << " Factorial of the given number " << n << " is: " << fact;
		cout << endl;
}
	return 0;
}


