#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
	double userVal;
	double y(double x);

	//present the app
	cout << "This is a linear function calculator" << endl;
	
	cout << "\nInput your x value: ";
	cin >> userVal;

	cout << fixed << setprecision(2) << "Result: " << "f(" << userVal << ") " << "= " << "5(" << userVal << ")" << " - " << "3" << " = " << y(userVal) << endl;
	return 0;
}

double y(double x) {
	return ((5 * x) - 3);
}