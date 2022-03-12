#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <ctime>
#include<string>
using namespace std;     

int strLen(const char* string) {
	int index = 0;
	while (string[index] != '\0') {
		index++;
	}
	cout << index << endl;
	return index;
};

int main()
{
	strLen("");
	strLen("Hello world!");	

}

