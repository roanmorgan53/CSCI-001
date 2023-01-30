#include <iostream>
#include <iomanip>
using namespace std;

double calculatePi(int numberTerms);

int main() {
	int numberTerms;
	int divisor = 1;
	int i = 1;

	//project description
	cout << "Pi Infinite Series Calculator" << endl;

	cout << "\nHow Many Tens Terms Would You Like to Calculate: ";
	cin >> numberTerms;
	cout << fixed << setprecision(10);
	for (int i = 1; i <= numberTerms; i++) {
		cout << "PI("<< i*10 << ") = ";
		cout << calculatePi(i*10) << endl;
	}


	return 0;
}

double calculatePi(int numberTerms) {
	int divisor = 1.0;
	double pi = 4;
	for (int i = 0; i < numberTerms; i++) {
		divisor = divisor + 2;
		if (i % 2) {
			pi += 4.0 / divisor;
		}
		else {
			pi -= 4.0 / divisor;
		}
	}
	return pi;
}