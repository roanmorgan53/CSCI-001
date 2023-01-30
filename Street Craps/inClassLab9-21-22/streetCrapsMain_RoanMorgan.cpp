//Roan Morgan
//9-21-22

#include <iostream>
#include <cstdlib> //srand, rand
#include <ctime> // time
using namespace std;

int die(void);

int main(void) {
	srand(time(0));
	char userResponse;
	int point, rickRoll;
	int wins = 0;
	int loss = 0;
	bool rollAgain;

	//project description
	cout << "Street Craps!\n" << endl;

	system("pause"); 
	do {
		system("cls");

		point = die() + die();

		cout << "Your point is: " << point << endl;

		if (point == 7 || point == 11) {
			cout << "\nYou Win!!!" << endl;
			wins++; //accumulator
		}
		else if (point == 2 || point == 3 || point == 12) {
			cout << "\nYou Lost :(!!!!" << endl;
			loss++; //accumulator
		}
		else {
			cout << "\nRoll " << point << " again to win." << endl;

			do {
				int rickRoll = die() + die();
				if (point == rickRoll) {
					cout << "\nYour point is: " << rickRoll << endl;
					cout << "\nYou Win!!" << endl;
					wins++;
					rollAgain = false;
				}
				else if(rickRoll == 7) {
					cout << "\nYour point is: " << rickRoll;
					cout << "\n\nYou Lose :(((!!" << endl;
					loss++;
					rollAgain = false;
				}
				else {
					cout << "\nYour point is: " << rickRoll << endl;
					cout << "\nYou gotta roll again." << endl;
					rollAgain = true;
				}

			} while (rollAgain == true);
		}

		cout << "\nPlay Craps Again? (y or n): ";
		cin >> userResponse;
	} while (userResponse == 'y');

	system("cls");

	cout << "You won " << wins << " number of times." << endl;
	cout << "You lost " << loss << " number of times." << endl;

	return(0);
}

int die(void) {
	
	return (1 + rand() % 6);
}