#include<iostream>
using namespace std;
int main()

//progam 1
//{
//	int number;
//	cout << "Enter the Number: " ;
//	cin >> number;
//	if( number > 0 )
//	{
//		cout << " Positive Number. " << endl;
//	}
//	if( number < 0 )
//	{
//		cout << " Negative Number. " << endl;
//	}
//	else
//	{
//		cout << " Number is zero. " << endl;
//	}
//	return 0;
//}

//program 2
//{
//	int temperature;
//	cout << "Enter Temperature (in Celcius): ";
//	cin >> temperature;
//	if ( temperature >= 40 )
//	{
//		cout << "Stay Indoors because it is extremely hot and could be dangerous for health.\n";
//	}
//	else if ( temperature <= 39 && temperature >= 30 )
//	{
//		cout << "Drinking plenty of water to stay hydrated in the hot weather.\n";
//	}
//	else if ( temperature <= 29 && temperature >= 20 )
//	{
//		cout << "Weather is pleasent and suitable for outdoor activities.\n";
//	}
//	else
//	{
//		cout << "Wearing warm clothes to stay comfortable in the cooler weather.\n";
//	}
//	return 0;
//}

// program 3
//{
//	string username,password;
//	cout << "Enter the Username: " ;
//	cin >> username ;
//	if( username != "admin" )
//	{
//	cout<<"User not Found." ;
//	return 0;
//	}
//	cout << "Enter the Password: " ;
//	cin >> password ;
//	if( username == "admin" && password == "12345" )
//	{
//		cout << "Access Granted.\n";
//	}
//	else if( username == "admin" && password != "12345" )
//	{
//		cout << "Wrong Password.\n" ;
//	}
//	else
//	{
//		cout << "User not found." ;
//	}
//	return 0;
//}

//program 4
{
	int sub1,sub2,sub3;
	int totalmarks=300,obtainedmarks,scholarshipeligibility;
	float percentage,percentagesub1,percentagesub2,percentagesub3;
	char grade,gradesub1,gradesub2,gradesub3;
	cout << " Enter Marks in subject 1: ";
	cin >> sub1;
	cout << " Enter Marks in subject 2: ";
	cin >> sub2;
	cout << " Enter Marks in subject 3: ";
	cin >> sub3;
	obtainedmarks= sub1 + sub2 + sub3 ;
	percentage = (double)obtainedmarks / totalmarks * 100 ;
	if ( percentage >= 90 )
	{
		grade = 'A';
	}
	else if ( percentage >= 80 && percentage <= 89 )
	{
		grade = 'B';
	}
	else if ( percentage >= 70 && percentage <= 79 )
	{
		grade = 'C';
	}
	else if ( percentage >= 60 && percentage <= 69 )
	{
		grade = 'D';
	}
	else if ( percentage < 60 )
	{
		gradesub2 = 'F';
	}

	
	percentagesub1 = sub1;
	percentagesub2 = sub2;
	percentagesub3 = sub3;
	
	if ( percentagesub1 >= 90 )
	{
		gradesub1 = 'A';
	}
	else if ( percentagesub1 >= 80 && percentagesub1 <= 89 )
	{
		gradesub1 = 'B';
	}
	else if ( percentagesub1 >= 70 && percentagesub1 <= 79 )
	{
		gradesub1 = 'C';
	}
	else if ( percentagesub1 >= 60 && percentagesub1 <= 69 )
	{
		gradesub1 = 'D';
	}
	else if ( percentagesub3 < 60 )
	{
		gradesub2 = '3';
	}
	
	if ( percentagesub2 >= 90 )
	{
		gradesub2 = 'A';
	}
	else if ( percentagesub2 >= 80 && percentagesub2 <= 89 )
	{
		gradesub2 = 'B';
	}
	else if ( percentagesub2 >= 70 && percentagesub2 <= 79 )
	{
		gradesub2 = 'C';
	}
	else if ( percentagesub2 >= 60 && percentagesub2 <= 69 )
	{
		gradesub2 = 'D';
	}
	else if ( percentagesub2 < 60 )
	{
		gradesub2 = 'F';
	}
	
	
	if ( percentagesub3 >= 90 )
	{
		gradesub3 = 'A';
	}
	else if ( percentagesub3 >= 80 && percentagesub3 <= 89 )
	{
		gradesub3 = 'B';
	}
	else if ( percentagesub3 >= 70 && percentagesub3 <= 79 )
	{
		gradesub3 = 'C';
	}
	else if ( percentagesub3 >= 60 && percentagesub3 <= 69 )
	{
		gradesub3 = 'D';
	}
	else if ( percentagesub3 < 60 )
	{
		gradesub3 = 'F';
	}
	
	
	
	
	cout << "Total Marks: " << totalmarks << endl ;
	cout << "Obtained Marks: " << obtainedmarks << endl ;
	cout << "Percentage: " << percentage << "%" << endl ;
	cout << "Grade in Subject 1: " << gradesub1 << "|| " << "Grade in Subject 2: " << gradesub2 <<"|| " << "Grade in Subject 3: " << gradesub3 << endl ;
	if ( (gradesub1 == 'A' && gradesub2 == 'A') && (gradesub3 == 'A') )
	{
		if(totalmarks >= 270 )
		{
			cout << "This Student is eligible for a Merit Scholarship\n" ;
		}
	}
	else if ( gradesub1 == 'B' && gradesub2 == 'B' && gradesub3 == 'B' )
	{
		if(totalmarks >= 240 )
		{
			cout << "This Student is eligible for a Regular Scholarship\n" ;
		}
	}
	else
	{
		cout << " Not Eligible for a Scholarship. \n" ;
	}
	return 0;
}
//program 5
//{
//	int age,income;
//	cout << "----Bank Loan Eligibility Checker.----\n" ;
//	cout << "Enter your Age: " ;
//	cin >> age ;
//	if ( age < 18 )
//	{
//		cout << " You are not Eligible for a loan because you are under 18 Years of Age.\n";
//		return 0;
//	}
//	cout << "Enter Your Income: $" ;
//	cin >> income ;
//	if ( age >= 18 && income < 30000 )
//	{
//		cout << "You meet the Age Requirement but are not Eligible for a Loan because your income is below $30000." ;
//	}
//	else
//	{
//		cout << "Congratulations! You are Eligible for a Loan.";
//	}
//	return 0;
//}

//program 6
{
	string 	username,password,role;
	cout << "---Role Based Access System---\n" ;
	cout << "Enter Username: " ;
	cin >> username ;
	cout << "Enter Password: " ;
	cin >> password ;
	if( username == "admin" && password == "password123")
	{
		cout << "Authentication Successful.\n" ;
		cout << " Enter your role: " ;
		cin >> role ;
		if ( role == "Admin")
		{
			cout << "Full Access.\n" ;
		}
		else if ( role == "Guest")
		{
			cout << "Limited Access.\n" ;
		}
		else
		{
			cout << "No Access.\n" ;
		}
	}
	else
	{
		cout << "Authenticaton Failed. Access Denied.";
	}
	return 0;
}
