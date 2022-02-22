#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>
using namespace std;     

const int n = 3;
int i, j, k;
int matrix_A[n][n];
int matrix_B[n][n];
int matrix_C[n][n];

int main()
{
	cout << "Variant with set value. " << endl;
	cout << "Matrix A: " << endl << "\t 3, 1, 1\n" << "\t 0, 2, 5\n" << "\t 1, 2, 3\n" << endl;
	cout << "Matrix B: " << endl << "\t 4, 5, 1\n" << "\t 0, 2, 2\n" << "\t 1, 6, 4\n"<< endl;
	cout << "Matrix C = A * B: ";
	int Matrix_A[3][3] = { {3, 1, 1}, {0, 2, 5}, {1, 2, 3} };
	int Matrix_B[3][3] = { {4, 5, 1}, {0, 2, 2}, {1, 6, 4} };
	int Matrix_C[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

	for (int i = 0; i < 3; i++) {
		cout << endl;
		cout << "\t";
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				Matrix_C[i][j] += Matrix_A[i][k] * Matrix_B[k][j];
			}
			cout << Matrix_C[i][j] << "  ";
		}
	}
	cout << endl;

	cout << "Variant with your numbers. " << endl;
	cout << "Matrix A: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> matrix_A[i][j];
	}
	cout << "Matrix B: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> matrix_B[i][j];

	}
	cout << endl;
	cout << "Matrix C = A * B: ";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++) {
			matrix_C[i][j] = 0;

			for (int k = 0; k < n; k++)
				matrix_C[i][j] += matrix_A[i][k] * matrix_B[k][j];
			cout << matrix_C[i][j] << " ";
		}
	}
	cout << endl;
}
