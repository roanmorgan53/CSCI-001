// Dog Year Calculator App
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string dogName;
	int dogAge;
	int dogYears;

	cout << "Dog to Human Year Calculator\n" << endl;

	// dogs name, age and then the age in human years
	cout << "Input your dogs name: ";
	getline(cin, dogName);

	//find age
	cout << "\nHow old is " << dogName << " (in human years): ";
	cin >> dogAge;

	//calculate age in dog years
	dogYears = (dogAge * 7);

	//relay infor
	cout << endl;
	cout << dogName << " is " << dogYears << " years old in dog years";

	//cout << "\nYour dog's name is: " << dogName;
	return 0;
}