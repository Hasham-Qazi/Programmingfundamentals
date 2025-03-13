#include<iostream>
using namespace std;
int main()

//program 1
//{
//	int n1,n2;
//	char op;
//	cout << "Enter two number: " ;
//	cin >> n1 >> n2 ;
//	cout << "Enter the operator you want to perform Operation (+,-,*,/): ";
//	cin >> op;
//	switch(op)
//	{
//		case '+' :
//			cout << "Additon: " << n1+n2 <<endl ;
//			break;
//		case '-' :
//			cout << "Substraction: " << n1-n2 <<endl ;
//			break;
//		case '*' :
//			cout << "Multiplication: " << n1*n2 <<endl ;
//			break;
//		case '/' :
//			cout << "Division: " << n1/n2 << endl ;
//			break;
//		default:
//			cout << "You entered an invalid operator.\n" ;
//	}
//	return 0;
//}

//program 2
//{
//	int n ;
//	cout << "Enter the Day you want to Display ( i.e. 1-7 ): " ;
//	cin >> n ;
//	switch ( n )
//	{
//		case 1 :
//		cout << "Monday.\n" ;
//		break;
//		case 2 :
//		cout << "Tuesday.\n" ;
//		break;
//		case 3 :
//		cout << "wednesday.\n" ;
//		break;
//		case 4 :
//		cout << "Thursday.\n ";
//		break;
//		case 5 :
//		cout << "Friday.\n ";
//		break;
//		case 6 :
//		cout << "Saturday.\n" ;
//		break;
//		case 7 :
//		cout << "Sunday.\n" ;
//		break;
//		default:
//		cout << "Error! You Entered Wrong Number.\n" ;
//	}
//	return 0;
//}

//program 3
//{
//	int n ;
//	float area;
//	cout << " Enter the Shape Number you want to calculate Area ( 1 for Circle, 2 for Rectangle, 3 for Triangle ): " ;
//	cin >> n ;
//	switch ( n )
//	{
//		case 1 :
//			radius;
//			cout << "Enter Radius of Circle: " ;
//			cin >> radius ;
//			area = ( float )3.14 * r * r ;
//			cout << "Area of Circle: " << area << endl ;
//			break ;
//		case 2 :
//			int length,width;
//			cout << "Enter the Length of Rectangle: " ;
//			cin >> length ;
//			cout << "Enter the Width of Rectangle: " ;
//			cin >> width ;
//			area = length * width ;
//			cout << "Area of Rectangle: " << area << endl ;
//			break ;
//		case 3 :
//			int base,height;
//			cout << "Enter the Base of Triangle: " ;
//			cin >> base ;
//			cout << "Enter the Height of Triangle: " ;
//			cin >> height ;
//			area = ( float ) 0.5 * base * height ;
//			cout << "Area of Triangle: " << area << endl ;
//			break ;
//		default :
//			cout << "Error! You Entered an Invalid Number.\n" ;
//		}
//	return 0 ;
//}

// program 4
//{
//	int n ;
//	int amount ,convert ;
//	int pkr,inr,euros; 
//	cout << "Currency Converter (USD to PKR,INR,EURO): " << endl ;
//	cout << "Enter the Amount You Want to Convert ( in USD ): $" ;
//	cin >> amount ;
//	cout << "Enter the Currency you want to convert USD into ( 1 for PKR, 2 For INR, 3 for Euros):" ;
//	cin >> n ;
//	switch ( n )
//	{
//		case 1 :
//		pkr = 280 ; //1 USD = 280 PKR
//		convert = amount * pkr ;
//		cout << "1 USD = " << pkr << " PKR" << endl ;
//		cout << "Your converting amount in USD to PKR: $" << amount << endl ;
//		cout << "You recieved in PKR: " << convert << " PKR" << endl ;
//		break ;
//		case 2 :
//		inr = 88 ; //1 USD = 88 INR
//		convert = amount * inr ;
//		cout << "1 USD = " << inr << " INR" << endl ;
//		cout << "Your converting amount in USD to INR: $" << amount << endl ;
//		cout << "You recieved amount in INR: " << convert << " INR" << endl ;
//		break ;
//		case 3 :
//		euros = 280 ; //1 USD = 0.96 EUROS 
//		convert = ( float ) amount * euros ;
//		cout << "1 USD = " << euros << " EUROS" << endl ;
//		cout << "Your converting amount in USD to EUROS: $" << amount << endl;
//		cout << "You recieved amount in EUROS: " << convert << " EUROS" << endl ;
//		break;
//		default:
//		cout << "Error! You entered  an invalid number." << endl ;
//	}
//	return 0;
//}

//program 5
{
	int category,item,quantity ;
	double price = 0,total = 0,discount = 0, grandtotal ;
	cout << "-----Welcome to the Shopping System-----\n";
	cout << "Select Category(i.e. 1/2/3): \n" ;
	cout << "1. Electronics \n2. Clothing \n3. Groceries\n" ;
	cin >> category ;
	 switch ( category )
	 {
	 	case 1 :
	 		cout << "You selected Electronics.\n";
	 		cout << "Select Item: \n" ;
	 		cout << "1. Laptop (1000$)\n2. Smartphone (700$)\n3. Headphone (150$)\n" ;
	 		cin >> item ;
	 		switch ( item )
	 		{
	 			case 1 :   price = 1000 ; break ;
	 			case 2 :   price = 700 ; break ;
	 			case 3 :   price = 150 ; break ;
	 			default :  cout << "Invalid Item.\n" ;
			 }
			 break;
		case 2 :
	 		cout << "You selected Clothing.\n";
	 		cout << "Select Item: \n" ;
	 		cout << "1. Jacket ($120)\n2. T-Shirts ($40)\n3. Jeans ($60)\n" ;
	 		cin >> item ;
	 		switch ( item )
	 		{
	 			case 1 :   price = 120 ; break ;
	 			case 2 :   price = 40 ; break ;
	 			case 3 :   price = 60 ; break ;
	 			default :  cout << "Invalid Item.\n" ;
			 }
			 break;
		case 3 :
	 		cout << "You selected Groceries.\n";
	 		cout << "Select Item: \n" ;
	 		cout << "1. Milk (1 Liter - $2)\n2. Bread (1 Loaf - $3)\n3. Eggs (1 Dozen - $5)\n" ;
	 		cin >> item ;
	 		switch ( item )
	 		{
	 			case 1 :   price = 2 ; break ;
	 			case 2 :   price = 3 ; break ;
	 			case 3 :   price = 5 ; break ;
	 			default :  cout << "Invalid Item.\n" ;
			 }
			 break;
			 default:
			cout << "Invalid Caregory.\n";
	 }
	 cout << "Enter Quantity: ";
	 cin >>  quantity ;
	 total = quantity * price ;
	 if ( total > 500 )
	 {
	 	discount = total * 0.2 ;
	 }
	 else if ( total >= 100 && total <=500)
	 {
	 	discount = total * 0.1 ;
	 }
	 else
	 { 
	 	discount = 0 ;
	 }
	 grandtotal = total - discount ;
	 cout << "Bill Invoice : \n";
	 cout << "Total : $" << total << endl ;
	 cout << "Discount : $" << discount << endl ;
	 cout << "Grand Total : $" << grandtotal << endl ;
	 cout << "Thank you for Shopping here!\n" << endl ;
	 return 0;
}
