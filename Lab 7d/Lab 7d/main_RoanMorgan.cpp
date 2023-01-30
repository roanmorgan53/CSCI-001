//Roan Morgan
//Lab 7d
//11.28.22
#include <iostream>
#include <cstdlib>
using namespace std;

int charSearch(char arg[], const int size, char userArg);

int main(void) {
	srand(time(0));

	char userResponse = 'y';

	const int size = 10;
	char randChar[size];
	char userChar;

	for (int i = 0; i < size; i++) {
		randChar[i] = 97 + rand() % 26;
	}

	do {

		cout << "randomChars = [";

		for (int i = 0; i < size; i++) {
			if (i == size - 1) {
				cout << randChar[i] << "]" << endl;
				break;
			}

			cout << randChar[i] << ",";
		}

		cout << "Enter a char to search for: ";
		cin >> userChar;

		int location = charSearch(randChar, size, userChar);

		cout << "A '" << userChar << "' is located at index [" << location << "]\n\n";

		cout << "Would you like to continue? (y/n): ";
		cin >> userResponse;
		system("cls");

	} while (userResponse == 'y');

	return 0;
}

int charSearch(char arg[], const int size, char userArg)
{

	for (int i = 0; i < size; i++) {
		if (arg[i] == userArg) {
			return i;
		}
	}

	return -1;
}
