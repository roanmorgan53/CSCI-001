//Roan Morgan
//Lab: Sieve of Eratosthenes 
//12.7.22
#include <iostream>
#include <iomanip>
using namespace std;

void printArray(bool a[], const int size);

int main(void) {
	
	//project description
	cout << "Lab: Sieve of Eratosthenes\n" << endl;

	const int size = RAND_MAX;	
	bool a[size]; //1000 element array holding bools

		for (int i = 0; i < size; i++) {
			a[i] = true;
		}

		for (int j = 2; j < size; j++) {
			for (int i = 2; i < 1.0 * size / j; i++) {
				a[j * i] = false;
			}
		}

		//(a, size);

		for (int i = 0; i < size; i++) {
			if (a[i] == true) {
				cout << i << ", ";
			}
		}

	return(0);
}

void printArray(bool a[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
	}
}
