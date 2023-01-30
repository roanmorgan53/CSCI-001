//Roan Morgan
//10/10/22
//Multiplication Table
#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {

	const int size = 11;
	const int columns = 11;
	int multiply[size][columns];

	//project description
	cout << "Multiplication Table" << endl;

	for (int i = 1; i < size; i++) { //populate the array
		for (int o = 1; o < size; o++) {

			multiply[o][i] = o * i;
		}
	}

	for (int i = 1; i < size; i++) {
		for (int o = 1; o < size; o++) {
			
			do {
				cout << multiply[o][i] << "\t";
				o++;
			} while (o != size);

			cout << endl;
			


		}
	}

	return(0);
}