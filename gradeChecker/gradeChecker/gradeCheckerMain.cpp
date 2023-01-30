#include <iostream>
using namespace std;

//function prototype
bool checkForA(int x);

int main() {
	int x;

	//app description
	cout << "Grade Checker" << endl;

	//prompt the user
	cout << "\nWhat number grade did you recieve: ";
	cin >> x;

	//function call/answer
	if (checkForA(x) == true) {
		cout << "\nYou recieved an A!!!!!";
	}
	else {
		cout << "\nYou didn't recieve an A, try harder next time :)\n";
	}

	return 0;
}

//function implementation
bool checkForA(int x) {
	if (x > 89 && x <= 100) {
		return true;
	}
	else {
		return false;
	}
}