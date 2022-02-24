#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>
using namespace std;     

struct Participant {
	int id;
	char name[10] = "";
	char secondName [15] = "";
	int age;
	double weight;
	int birthYear;
	char education [11] = "";
};
void printInformation(Participant info) {
	cout << "Participant number:" << info.id << endl;
	cout << "Name:" << info.name<< endl;
	cout << "Second name:" << info.secondName<< endl;
	cout << "Age:" << info.age<< endl;
	cout << "Weight:" << info.weight<< endl;
	cout << "Year of birth:" << info.birthYear<< endl;
	cout << "Education:" << info.education << endl;
	cout << endl;
}

int main()
{	
	Participant Sergey = {1,"Sergey","Asauliak",32,79.5,1989,"bachelor"};
	Participant Ivan = {2,"Ivan","Kostopravov",44,98.3,1977,"secondary"};
	Participant Aleksey = {3,"Aleksey","Petrov",20,69.4,2001,"master"};

	printInformation(Sergey);
	printInformation(Ivan);
	printInformation(Aleksey);

	
}

