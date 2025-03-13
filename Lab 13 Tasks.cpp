#include<iostream>
using namespace std;
//int main()
//program 1
//{
//	int n=1;
//	int *ptr = &n;
//	cout << "Value of N using pointer: " << *ptr << endl;
//	return 0;
//}

//program 2
//{
//	int n = 20;
//	int *ptr = &n;
//	cout << "Original Value: " << n << endl;
//	*ptr = 100;
//	cout << "Value modified using Pointer: " << *ptr << endl;
//	return 0;
//}

//program 3
//{
//	int arr[3]={3,6,9};
//	int *ptr = arr;
//	 cout << "Displaying Array Elements Using pointers as: " << endl;
//	 for ( int i = 0 ; i < 3 ; i++ )
//	 {
//	 	cout << *( ptr +i ) << endl;
//	 }
//	return 0;
//}

//program 4
//void swap (int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int c = 1, d = 10;
//	cout << "Before Swapping c: " << c << "\nBefore swapping d: " << d << endl;
//	swap (&c,&d);
//	cout << "After Swapping c: " << c << "\nAfter swapping d: " << d << endl;
//}

//program 5
//int main()
//{
//	int* ptr = NULL ;
//	if( ptr == NULL )
//	{
//		cout << "Pointer is null and does not point to any valid memory.";
//		cout << endl;
//	}
//	else
//	{
//		cout << " Memory address it holds." << endl;
//	}
//	return 0;
//}

//program 6
int main()
{
	int n=50;
	void* ptr = &n;
	cout << "Value of n using void pointer: " << *(static_cast<int*>(ptr)) << endl;
	return 0;
}
