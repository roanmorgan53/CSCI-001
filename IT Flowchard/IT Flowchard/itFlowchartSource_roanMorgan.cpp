#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	string	userInput;
	//title
	cout << "IT Fix App" << endl;

	//start button
	cout << "\nPress the Computer's Start Button";

	//Computer turn on
	cout << "\nDoes the computer turn on (yes or no): ";
	cin >> userInput;

	//Start Branching off
	if (userInput == "yes") {
		cout << "\nAre there any error messages (yes or no): ";
		cin >> userInput;

		if (userInput == "yes") {
			cout << "\nPreform a Search for the Error Message" << endl;
		}

		else if (userInput == "no") {
			cout << "\nThe computer is fine" << endl;
		}
	}
	else if (userInput == "no") {
		cout << "\nIs your computer light on (yes or no): ";
		cin >> userInput;

		if (userInput == "yes") {
			cout << "\nTurn the Computer Monitor On" << endl;
			cout << "\nIs the problem solved (yes or no): ";
			cin >> userInput;

			if (userInput == "yes")
				cout << "\nEnjoy!" << endl;

			else if (userInput == "no")
				cout << "\nCall a Technician";
		}

		else if (userInput == "no") {
			cout << "\nCheck the Power Cord" << endl;
			cout << "\nIs the problem solved (yes or no): ";
			cin >> userInput;

			if (userInput == "yes")
				cout << "\nEnjoy!" << endl;

			else if (userInput == "no")
				cout << "\nCall a Technician";
		}
	}
	return 0;
}