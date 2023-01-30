#include <iostream>
#include <cmath>
using namespace std;

//function prototype
double y(double x);

int main() {
	double x;
	int startValue, endValue;
	char userInput = 'y';

	//project description
	cout << "Function Tables" << endl;

	cout << "\nf(x) = 5x^2-x+7\n";

	while(userInput == 'y') {

		cout << "\nWhat you like to be the beginning value: ";
		cin >> startValue;

		cout << "\nWhat would you like to be the ending value: ";
		cin >> endValue;

		cout << "\n x\t|\ty" << endl;
		cout << "-------------------" << endl;

		for (startValue >= endValue; startValue <= endValue; startValue++) {
			if (startValue >= 0)
				cout << " " << startValue << "\t|\t" << y(startValue) << endl;
			else
				cout << startValue << "\t|\t" << y(startValue) << endl;
		}
		cout << "\nWould you like to play again (y/n): ";
		cin >> userInput;
	}

	return 0;
}

//function implementation
double y(double x) {
	return 5 * pow(x, 2) - x + 7;
}