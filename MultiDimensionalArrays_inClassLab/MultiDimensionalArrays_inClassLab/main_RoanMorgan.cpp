//Roan Morgan
//10-5-22
//Intro to multidimensional arrays
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void mystery(int arg) { //pass by value = copy
	arg = 12;
}

void mysteryMachine(int& arg) { //pass by reference = same address as in main
	arg = 99;
}
//pass an array through a function
void arrayFunction(int arg[], const int size) { //pass by reference
	arg[0] = 43;
}

int main(void) {
	
	//project description
	cout << "Multi-Dimensional Arrays" << endl;

	string a[3] = { "JOHN","bill","mary" };

	cout << a[1] << endl;

	

	return(0);
}