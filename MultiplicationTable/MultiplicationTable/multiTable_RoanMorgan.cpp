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

	for (int i = 1; i < size; i++) {
		for (int o = 1; o < size; o++) {
			multiply[i][o] = i * o;
			cout << i << "*" << o << " = " << multiply[i][o] << endl;
		}
	}

	return(0);
}