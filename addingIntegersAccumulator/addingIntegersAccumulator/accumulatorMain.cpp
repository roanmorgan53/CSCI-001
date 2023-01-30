#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int accumulator(int);

int main() {
	int input;
	int length;
	int total = 0;

	//project description
	cout << "ini integer accumulator!!" << endl;

	cout << "\nWhat value would you like to start at: ";
	cin >> input;
	cout << "\nWhat length would you like the accumulator to go to: ";
	cin >> length;

	for (int i = input; i <= input + length; i++) {
		total += i;
		cout << i;
		if (i == input + length) {
			cout << " = " << total;
		}
		else {
			cout << " + ";
		}
	}


	return 0;
}