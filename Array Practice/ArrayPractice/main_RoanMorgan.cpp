//Roan Morgan
//9-28-22
//Array Practice
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
	srand(time(0));
	//project description
	cout << "Array Practice" << endl;

	const int size = 10;
	int a[size];

	cout << endl; 
	cout << "All tens" << endl;

	for (int i = 0; i < size; i++) {
		a[i] = 10;
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	cout << endl;
	cout << "Random Numbers From 1 - 100" << endl;

	for (int i = 0; i < size; i++) {
		a[i] = 1 + rand() % 100;
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	cout << endl;
	cout << "Sequential Odds" << endl;

	int savestate = 0;
	for (int i = 1; savestate < size; i += 2) {
		a[savestate] = i;
		cout << "a[" << savestate << "] = " << a[savestate] << endl;
		savestate++;
	}

	const int n = 100;
	double b[n];

	cout << endl;
	cout << "Decimals Odds" << endl;

	double gatorlytestrawberrykiwi = 0.1;
	for (int i = 0; i < n; i++) {
		b[i] = gatorlytestrawberrykiwi;
		cout << "b[" << i << "] = " << b[i] << endl;
		gatorlytestrawberrykiwi += 0.2;
	}

	cout << endl;
	cout << "Array Adder" << endl;

	double previousNum = 0;
	for (int i = 0; i < n; i++) {
		previousNum += b[i];
		//cout << previousNum << endl;
	}

	cout << "The numbers all added up equals: " << previousNum << endl;

	cout << endl;
	cout << "Print B backwords" << endl;

	for (int i = n - 1; i >= 0; i--) {
		cout << "b[" << i << "] = " << b[i] << endl;
	}

	return(0);
}