#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;     


int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	char sign;
	cout << " Enter  first number:\n";
	cin >> a;
	cout << " Enter  sign for solution: (example:+, -, *, /)\n";
	cin >> sign;
	cout << " Enter  second number:\n";
	cin >> b;
	
	
	switch (sign)
	{
	case '+':
		cout << " Result of addition:\n" << a + b;
		break;
	case '-':
		cout << " Result of deduction:\n" << a - b;
		break;
	case '*':
		cout << " Result of multiplication:\n" << a * b;
		break;
	case '/':
		if (b != 0)
			cout << " Result of division:\n" << a / b;
		else
			cout << " ERROR:Division on zero!\n";
		break;

	default:
		cout << " Incorrect sign\n";
		break;
	}
			
}
