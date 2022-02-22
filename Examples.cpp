#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>
using namespace std;     
int Rows = 5;
int Cols = 5;
int arr[5][5];
int main()
{
		 for (int i = 0; i < Rows; i++) {
			 for (int j = 0; j < Cols; j++)
				 arr[i][j] = rand() % 5 ;
		 }
		 cout << endl << "Pseudorandom matrix:" << endl;
		   for (int i = 0; i < Rows; i++) {
			   for (int j = 0; j < Cols; j++)
				 cout << arr[i][j] << " ";
				 cout << endl;
		   }		  
}
