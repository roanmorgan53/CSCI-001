#include <iostream>
#include <cmath>
using namespace std;

double genLinear(double m, double b, double x);

int main(void) {
	double slope;
	double intercept;
	double x;

	//present the app to the user
	cout << "General Linear Function Calculator" << endl;

	//ask for the slope m and y-int b
	cout << "\nEnter the slope: ";
	cin >> slope;
	cout << "Enter the y-intercept: ";
	cin >> intercept;

	//display function to the user
	cout << "Your given function: " << "f(x) = " << slope << "x + " << intercept;

	//prompt for x
	cout << "\n\nEnter an x-value: ";
	cin >> x;

	//display the results
	cout << "Result: f(" << x << ") = " << slope << "(" << x << ")" << " + " << intercept << " = " << genLinear(slope, intercept, x) << endl;
	return 0;
}

double genLinear(double m, double b, double x) {
	return m * x + b;
}