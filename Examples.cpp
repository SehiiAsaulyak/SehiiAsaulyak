#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>
using namespace std;     

int main()
{
	int num = 0;
		 int64_t result = 1;
		 const int size = 11;
		 int arr[size];
		 int64_t fact = 1;

	for (int i = 1; i < size; i++){
			 result = result * i;
			 arr[i] = result;
	}
		for (int j = 0; j < size; ++j){
			if (j == 0){
			  cout << j << "-" << 0 << endl;
					 j++;
			}
			  cout << j <<"-" << arr[j] << endl;
		}

cout << "Enter your number (0-20): " << endl;
			 cin >> num;
			 for (int i = 1; i <= num; i++) {
				 fact = fact * i;
			 }
			 cout << "The factorial of number " << num << " is: " << fact <<endl;
	
}
