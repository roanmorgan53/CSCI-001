#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

//create a new function
double f(double x);
void displayName(string argFirstName, string argLastName, int age); //function prototype

int main(void) {
	string fName, lname;
	int age;

	cout << "Enter first name: ";
	getline(cin, fName);
	cout << "\nEnter your last name: ";
	getline(cin, lname);
	cout << "\nEnter your age: ";
	cin >> age;
	
	cin.ignore();


	displayName("Roan", "Morgan", 18);
	return 0;
}

//function implementation
double f(double x) {
	return(x*x-9); 
}

//function implementation
void displayName(string argFirstName, string argLastName, int age) {
	cout << argFirstName << " " << argLastName << " " << age << endl;
	//no return because we have a void function0
}