//Roan Morgan
//
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	
	//project description
	cout << "Make a mario tower" << endl;
	int size;

	cout << "\nWhat would you like to be the size of your pyramid: ";
	cin >> size;

	int base = size;

	for (int i = 1; i <= size; i++) {
		for (int o = 0; o < i; o++) {
			cout << "#";
		}
		cout << endl;
	}

	return(0);
}