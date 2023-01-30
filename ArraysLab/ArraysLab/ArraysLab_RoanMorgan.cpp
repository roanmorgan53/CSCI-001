//Roan Morgan
//Arrays Lab
//9-26-22
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int die(void);
void printArray(int arg[], const int size);
void printStringArray(string arg[], const int size);

int main(void) {
	srand(time(0));


	//project description
	cout << "Hello Arrays" << endl;

	const int n = 5;
	char myName[5];

	myName[0] = 'R';
	myName[1] = 'o';
	myName[2] = 'a';
	myName[3] = 'n';
	myName[4] = '\0';

	for (int i = 0; i < 5; i++) {
		cout << myName[i];
	}
	return(0);
}

int die(void) {

	return(1 + rand() % 6); 
}

void printArray(int arg[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << "Element " << i << " contains " << arg[i] << endl;
	}
}

void printStringArray(string arg[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << "String " << i << " contains " << arg[i] << endl;
	}
}