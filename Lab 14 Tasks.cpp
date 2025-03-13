#include<iostream>
using namespace std;

//program 1
//struct Student
//{
//	string first_name;
//	string last_name;
//	int roll_number;
//	float marks;
//	void displaystudentinfo()
//	{
//		cout << "Student Full Name: " << first_name << " " << last_name << endl;
//		cout << "Student Roll Number: " << roll_number;
//	}
//};
//int main()
//{
//	Student student;
//	student.first_name = "Hassan";
//	student.last_name = "Gillani";
//	student.roll_number = 42;
//	student.marks = 90.5;
//	student.displaystudentinfo();
//	return 0;
//}

//program 2
struct Student
{
	string first_name;
	string last_name;
	int roll_number;
	float marks;
	void displaystudentinfo()
	{
		cout << "Student Full Name: " << first_name << " " << last_name << endl;
		cout << "Student Roll Number: " << roll_number;
	}
};
int main()
{
	int n;
	cout << "Enter the Number of Student: ";
	cin >> n;
	Student *ptr = new Student[n];
	for ( int i = 0 ; i < n ; i++ )
	{
		cout << "Enter Student " << i + 1 << " Details:\n";
		cout << "First Name: ";
		cin >> (ptr + i)->first_name;
		cout << "Last Name: ";
		cin >> (ptr + i)->last_name;
		cout << "Roll Number: ";
		cin >> (ptr + i)->roll_number;
		cout << "Marks: ";
		cin >> (ptr+ i)->marks;
	}
	for ( int i = 0 ; i < n ; i++ )
	{
		(ptr + i)->displaystudentinfo();
		cout << "\n----------------------------------\n";
	}
	return 0;
}


