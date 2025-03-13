#include <iostream>
using namespace std;
int main()
//program 1
//{
//	int arr[5]={1,2,3,4,5};
//	cout << "Array in traverse order is as follows: ";
//	for ( int i =4 ; i >=0 ; i-- )
//	{
//		cout << arr[i] << " " ;
//	}
//	cout << endl;
//	return 0;
//}

//program 2
//{
//	int n ;
//	cout << "Enter the number of Digits you want to print an array: " ;
//	cin >> n;
//	int arr[n];
//	cout << "Enter Elements in array you want to display as out put: ";
//	for ( int i = 0 ; i < n ; i++ )
//	{
//		cin >> arr[i];
//		cout << "\r ";
//	}
//	cout << "Output displaying the elements in array initialized in traverse order: ";
//	for ( int j = n-1 ; j>=0 ; j-- )
//	{
//		cout << arr[j] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//program 3
//{
//	int arr[10]={100,450,343,434,130,230,299,564,121,674},sum= 0;
//	float avg;
//	for ( int i = 0; i < 10 ; i++ )
//	{
//		sum= sum + arr[i];
//		avg = (float)sum / 10;
//	}
//	cout << "Sum of array: " << sum << endl ;
//	cout << "Average of Array: " << avg << endl;
//	return 0;
//}

 //program 4
// {
// 	int arr[]={1,2,3,4,5};
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	cout << "Size of Array: " << size << endl;
// 	return 0;
// }

//program 5
{
	int n;
	cout << "Enter a number you want to print largest from 1 to N: ";
	cin >> n;
	int arr[n];
	cout << " Enter " << n << " numbers int th array: ";
	for ( int i = 0 ; i<n ; i++ )
	{
		cin >> arr[i];
	}
	int largest = arr[0];
	for ( int j = 0 ; j<n ; j++ )
	{
		if( arr[j] > largest )
		{
			largest = arr[j];
		}
	}
	cout << "Largest Number is " << largest << " in the array." << endl;
	return 0;
}
