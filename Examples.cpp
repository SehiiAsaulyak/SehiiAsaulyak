#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;     

int R(int a){
	if (a < 1)
		return 0;
	else(a--);
	cout << a << endl;
	return R(a);
}
 int main()
{
	 R(9);
	 
}
