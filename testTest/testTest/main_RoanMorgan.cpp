//Roan Morgan
//
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
	srand(time(0));

	const __int64 size = 1000000;
	__int64 a[size];

	cout << "\n50 random numbers\n" << endl;

	for (int i = 0; i < size; i++) {
		a[i] = rand();
		//cout << "a[" << i << "]" << " = " << a[i] << endl;
	}

	cout << "\nArray Max:\n";

	__int64 king = 0;
	for (int i = 0; i < size; i++) {
		if (king < a[i]) {
			king = a[i];
		}
	}
	cout << king << endl;

	cout << "\nArray Min:\n";

	__int64 pawn = king;
	for (int i = 0; i < size; i++) {
		if (pawn > a[i]) {
			pawn = a[i];
		}
	}
	cout << pawn << endl;

	cout << "\nArray Sum:\n";

	__int64 addState = 0;
	for (int i = 0; i < size; i++) {
		if (i != 0) {
			addState += a[i];
		}
	}
	cout << addState << endl;

	cout << "\nArray Average:\n";

	cout << addState*1.0 / size << endl;

	return(0);
}