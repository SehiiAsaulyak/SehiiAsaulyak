#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>
using namespace std;     

int main()
{
	int64_t F1 = 1;
	int64_t F2 = 0;
	int64_t FibonacciNumber = 0;
	const int size = 50;
	int64_t arr[size];
	int num = 0;

	for (int i = 0; i < size; i++) {
		FibonacciNumber = F1 + F2;
		arr[i] = FibonacciNumber;
		F1 = F2;
		F2 = FibonacciNumber;
	}
	cout << "How many elements do you want to see (0-50):" << endl;
	cin >> num;
	cout << endl;
	cout << num << " Fibonacci Numbers: " << endl;
	for (int i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}
	
}
