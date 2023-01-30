#include <iostream>
#include <cmath>
using namespace std;

//function prototype
int quadratic(int, int, int);

int main() {
	int a, b, c;

	//prompt the user
	cout << "Quadratic Discriminate" << endl;
	
	cout << "\nWhat is the value of the first coefficient: ";
	cin >> a;

	cout << "\nWhat is the value of the second coefficient: ";
	cin >> b;

	cout << "\nWhat is the value of the third coefficient: ";
	cin >> c;

	//output to user
	if (quadratic(a, b, c) > 0) {
		cout << "\nTwo Real Solutions" << endl;
	}
	else if (quadratic(a, b, c) == 0) {
		cout << "\nOne Real Solution" << endl;
	}
	else if (quadratic(a, b, c) < 0) {
		cout << "\nTwo Complex Solutions" << endl;
	}

	return 0;
}

//function implementation
int quadratic(int a, int b, int c) {
	return pow(b, 2) - 4*(a)*(c);
}