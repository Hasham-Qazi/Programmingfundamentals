#include <iostream>
#include <math.h>
#include <iomanip>
#include <string.h>
using namespace std;
//int main()
// program 1
//{
//	double n;
//	cout << "Enter the Number you want to perform operations: ";
//	cin >> n;
//	cout << sqrt(n) << endl;
//	cout << fabs(n) << endl;
//	cout << sin(n) << endl;
//	cout << cos(n) << endl;
//	cout << pow ( 3 , n ) << endl;
//} 

//program 2
//int evenorodd(int x)
//{
//	if ( x % 2 == 0 )
//	{
//		
//		cout << "Number is even." << endl;
//	}
//	else
//	{
//		cout << "Number is odd." << endl;
//	}
//}
//int main()
//{
//	int n;
//	cout << "Enter a Number: ";
//	cin >> n;
//	evenorodd( n );
//	return 0;
//}

//program 3
//int fact(int n)
//{
//	int fact=1;
//	for ( int i = 1 ; i <= n ; i++ )
//	{
//		fact = fact * i;
//	}
//	return fact;
//}
//int main()
//{
//	int number;
//	cout << "Enter the Number you want to print factorial: ";
//	cin >> number;
//	cout << "Factorial of a given number " << number << " : " << fact(number)<< endl;
//	return 0;
//}

//program 4
//void greeting()
//{
//	cout << "Hello, Welcome to C++ Funtions!";
//}
//int main()
//{
//	greeting();
//	return 0;
//}


//program 5
//int add(int a,int b)
//{
//	return a+b;
//}
//int sub(int a, int b)
//{
//	return a-b;
//}
//int prod(int a , int b)
//{
//	return a*b;
//}
//int div(int a , int b)
//{
//	return a/b;
//}
//int main()
//{	int choice;
//	int n1,n2,ans;
//	do
//	{
//		cout<< "Menu Driven Calculator \n";
//		cout << "1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Exit\n";
//		cin >> choice;
//		if( choice >= 1 && choice <= 4 )
//		{
//			cout << "Enter 1 Number: ";
//			cin >> n1;
//			cout << "Enter 2 Number: ";
//			cin >> n2;
//			if( choice == 1 )
//			{
//				cout << "Addition: " << add(n1,n2) << endl;
//			}
//			else if ( choice == 2 )
//			{
//				cout << "Substraction: " << sub(n1,n2) << endl;
//			}
//			else if ( choice == 3 )
//			{
//				cout << "Mutiplication: " << prod(n1,n2) << endl;
//			}
//			else if ( choice == 4 )
//			{
//				if (n2 != 0)
//				{
//					cout << "Division: " << div(n1,n2) << endl;
//				}
//				else
//				{
//					cout << "Division by 0 is not Possible." << endl;
//				}
//			}
//			else
//			{
//				cout << "Error! Select valid choice only." << endl;
//			}
//		}
//		else if ( choice !=5 )
//		{
//			cout << "Error! Invalid choice! Select from Valid Option." << endl;
//		}
//	}while( choice != 5 );
//	return 0;
//}

//program 6
void menu()
{
	cout << "1. Pizza (10$)\n2. Burger (3$)\n3. Fries (2$)4. Pasta (5$)\n5. Coal Drink(1$)\n" << endl;
}
double itemcost(double price, int quantity)
{
	return price * quantity;
}
double totalbill(double total)
{
	double servicecharge = 0.10 * total;
	return total = total + servicecharge;
}
int main()
{
	double itemprices[5]={10,3,2,5,1};
	int Choice,Quantity;
	double TotalBill = 0;
	string items[5]={"Pizza","Burger","Fries","Pasta","Coal Drink"};
	cout << "Welcome to the Resturant Menu.\n";
	do
	{
		menu();
		cout << "Select the item choice (1-5) or 0 to exit";
		cin >> Choice;
		if ( Choice >=1 && Choice <=5 )
		{
			cout << "Enter Quantity: ";
			cin >> Quantity;
			double ItemCost = itemcost(itemprices[Choice -1], Quantity );
			TotalBill = TotalBill + ItemCost;
			cout << "Price "<< itemprices[Choice-1] << " ||  Quantity " << Quantity << " || Item Name " <<items[Choice-1] << " || Added to the Bill.\n";
		}
		else if(Choice !=0)
		{
			cout << "Invalid choice! Please choose a valid item.\n";
		}
	}while(Choice != 0 );
	double finalbill = totalbill( TotalBill );
	cout << "Total Bill: " << TotalBill << endl;
	cout << "Total Bill including Service Charges: " << finalbill << endl;
	cout << "Thank You for dining with us.\n";
	return 0;
}


