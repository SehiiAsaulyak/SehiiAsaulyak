#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>
#include<string>
using namespace std;     

template <typename T>
void changeValue(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
};

int main()
{	
	//double var1 = 5.6;
	//double var2 = 1.4;
	string var1 = "hello";
	string var2 = "goodbye";
	cout << "a= " << var1 << endl << "b= " << var2 << endl;

	cout << "Swap:" << endl;

	changeValue(var1, var2);
	cout << "a= " << var1 << endl << "b= " << var2 << endl;
}

