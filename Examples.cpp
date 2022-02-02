#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;     

int R(int a) {
	if (a <= 1)
	return 0;
	else(a--);
	cout << a;
    return R(a);
}
int function(int b) {
	cout << b;
	return b;
}
 int main()
{
	 R(9);
	 function(10);
	 
}



