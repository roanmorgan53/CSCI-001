//Roan Morgan
//Learning about pointers
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printString(string); //pass by value
void printStringByRef(string&); //pass by reference
void printStringByPtr(string*); //pass by pointer

//how to pass a regular array to a function
void printArray(string arg[], const int size);
void printArrayPtr(string* arg[], const int size);

double square(double* x);

//intro to pointer arithmatic
void printArrayUsingPtrArithmatic(string* arg, const int size);

int main(void) {
	
	double g = 5;
	int x = 5;
	int* y = &x; //x* instantiates a pointer / Pointers contain addresses

	//x* is the pointer datatype

	float z = 1.0;
	float* w = &z;

	string name = "Roan Long Johnathan Morgan";
	string* namePtr = &name; //be accustomed to naming pointers with xPtr

	string a[3] = { "john", "joe", "mary" };
	string* b[3]; //create some string pointers

	b[0] = &a[0]; //an array of pointers
	b[1] = &a[1]; 
	b[2] = &a[2];

	cout << x << endl;
	cout << y << endl; //& is the address operator

	cout << endl;

	cout << z << endl;
	cout << w << endl; // *x dereferences the adress and instead passes the contents of the memory block

	cout << endl;

	cout << name << endl;
	cout << namePtr << endl;
	cout << *namePtr << endl; 

	cout << endl;

	printString(name); //pass by value where you get a copy
	printStringByRef(name); //pass by reference
	printStringByPtr(namePtr); // pass the address via a pointer

	cout << endl;

	printStringByRef(a[1]);
	printStringByPtr(b[1]);

	cout << endl;

	printArray(a, 3);

	cout << endl;

	printArrayPtr(b, 3);

	cout << endl;

	double* r = &g;

	cout << square(r) << endl;;

	cout << endl;

	printArrayUsingPtrArithmatic(a, 3);

	return(0);
}

void printString(string arg) {
	cout << arg << endl;
}

void printStringByRef(string& arg) { //function has access to change the memory block because of pass by reference (address was passed)
	cout << arg << endl;
}

void printStringByPtr(string* arg) {
	cout << *arg << endl; //*arg deadresses the passed pointer
}

void printArray(string arg[], const int size) {
	for (int i = 0; i < size; i++) {

		cout << arg[i] << endl;
	}
}

void printArrayPtr(string* arg[], const int size) {
	for (int i = 0; i < size; i++) {

		cout << *arg[i] << endl;
	}
}

double square(double* x) {
	return(*x * *x);
}

void printArrayUsingPtrArithmatic(string* arg, const int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arg + i) << endl; //prints the value based off of an address
	}
}