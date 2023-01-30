//Roan Morgan
//Structures
//10.17.22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//outside of the main initialize your structure
//start structure name with a capital
struct Person {  //Person datatype
	string fName = "N/A"; //can default a value for if nothing defines the value
	string mName = "N/A";
	string lName = "N/A";
	string eyeColor = "N/A";
	int age = 0;
	double height = 0.0;
	
	
};

void printPerson(Person& arg);
void printPersonPtr(Person* argPtr);

int main(void) {
	
	//project description
	cout << "Structures In Class Lab:" << endl;
	cout << "Hello Object Oriented Programming" << endl << endl; //OOP is the acronym

	Person y, z;
	Person* temp = &y;

	y.fName = "Roan"; //populate using the . operator which enters the objects in the structure
	y.mName = "L";
	y.lName = "Morgan";
	y.age = 18;
	y.eyeColor = "Brown";

	z.fName = "Preston";
	z.mName = "Rhys";
	z.lName = "Kearnan";
	z.age = 18;
	z.eyeColor = "Sea Green";

	cout << y.fName << " "; //cannot just put y into the output stream
	cout << y.mName << " ";
	cout << y.lName << " " << endl;
	cout << y.age << endl << endl;

	printPerson(y);
	cout << "\n************" << endl << endl;
	printPerson(z);
	cout << "\n************" << endl << endl;
	printPersonPtr(temp);

	return(0);
}

void printPerson(Person& arg){
	cout << "First Name: " << arg.fName << endl;
	cout << "Middle Name: " << arg.mName << endl;
	cout << "Last Name: " << arg.lName << endl;
	cout << "Age: " << arg.age << endl;
	cout << "Eye Color: " << arg.eyeColor << endl;
}

void printPersonPtr(Person* argPtr){
	cout << "First Name: " << argPtr->fName << endl;
	cout << "Middle Name: " << argPtr->mName << endl;
	cout << "Last Name: " << argPtr->lName << endl;
	cout << "Age: " << argPtr->age << endl;
	cout << "Eye Color: " << argPtr->eyeColor << endl;
}
