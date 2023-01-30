//Roan Morgan
//Max and Min
//9-28-22
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int maxInteger(int a[], int size);
int minInteger(int a[], int size);

int main(void) {
	srand(time(0));

	char gameTime = 'y';

	while(gameTime == 'y') {
		system("cls");
		//project description
		cout << "Max and Min Arrays\n" << endl;

		const int size = 20;
		int randomNumbers[size];

		for (int i = 0; i < size; i++) {
			randomNumbers[i] = 1 + rand() % 1000;
			cout << "a[" << i << "] = " << randomNumbers[i] << endl;
		}

		cout << endl << "MAX: " << maxInteger(randomNumbers, size) << endl;
		cout << "min: " << minInteger(randomNumbers, size) << endl;

		cout << endl << "Wanna play again (y/n): ";
		cin >> gameTime;
	}

	return(0);
}

int maxInteger(int a[], int size) {
	int king = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] > king) {
			king = a[i];
		}
	}
	return king;
}

int minInteger(int a[], int size) {
	int king = 1000;
	for (int i = 0; i < size; i++) {
		if (a[i] < king) {
			king = a[i];
		}
	}
	return king;
}