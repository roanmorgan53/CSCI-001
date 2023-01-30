//Roan Morgan
//Array of Person's
//10.17.22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Person {
	string fName;
	string mName;
	string lName;
	string eyeColor;
	int age;
	double height;
};

void printPerson(Person arg);

int main(void) {
	
	//project description
	cout << "Array of Persons" << endl << endl;

	const int size = 6;
	Person a[size];

	a[0].fName = "Roan";
	a[0].mName = "Lucas";
	a[0].lName = "Morgan";
	a[0].eyeColor = "Brown";
	a[0].age = 18;
	a[0].height = 6.0;

	for (int i = 0; i < size; i++) {
		printPerson(a[i]);
	}

	return(0);
}

void printPerson(Person arg) {
	cout << "First Name: " << arg.fName << endl;
	cout << "Middle Name: " << arg.mName << endl;
	cout << "Last Name: " << arg.lName << endl;
	cout << "Eye Color: " << arg.eyeColor << endl;
	cout << "Age: " << arg.age << endl;
	cout << "Height: " << arg.height << endl;
	cout << "\n*************\n" << endl;
}
