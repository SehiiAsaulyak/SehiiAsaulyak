#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>
using namespace std;     

int a, b, c, d;
int det(int a, int b, int c, int d) {
	return a * d - b * c;
}
int main() {
	cout << "Enter:" << endl << "a, b" << endl << "c, d " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "d = ";
	cin >> d;
	int A = det(a, b, c, d);
	cout << "The determinant of your matrix: " << endl;
	cout << a << " " << b << endl << c << " " << d << endl;
	cout << "Equals: " << A << endl;
}
