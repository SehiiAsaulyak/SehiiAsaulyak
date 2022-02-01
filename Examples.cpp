#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;     

double a = 0;
double b = 0;
double Angle = 0;
double SquareTriangle(double a, double b, double sinAngle) {
	return 0.5 * a * b * sinAngle;
}
double RadianAngle(double Angle) {
	return (M_PI * Angle) / 180;
}

 int main()
{
		 cout << "Side a \n";
		 cin >> a;
		 cout << "Side b \n";
		 cin >> b;
		 cout << "Angle \n";
		 cin >> Angle;
		 double sinAngle = sin(RadianAngle(Angle));
		 cout << "SinusAngle =  " << sinAngle << endl;
		 double S = SquareTriangle(a, b, sinAngle);
		 cout << "SquareTriangle = " << S << endl;    

}
