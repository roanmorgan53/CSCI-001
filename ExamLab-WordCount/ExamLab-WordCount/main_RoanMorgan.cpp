//Roan Morgan
//11.21.22
//Exam #2: Word Count 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int wordCounter(string arg);

int main(void) {
	
	char userResponse = 'y';

	while (userResponse == 'y') {
		system("cls");
		//project description
		cout << "Exam #2: Word Count\n" << endl;

		string userInput = "";

		cout << "Enter something you would like to see the wordcount of: ";
		getline(cin, userInput);

		cout << endl;

		cout << "There are " << wordCounter(userInput) << " words in your string!\n";

		cout << endl;

		cout << "Wanna try again (y/n): ";
		cin >> userResponse;
		cin.ignore();
	}

	return(0);
}

int wordCounter(string arg)
{
	int numWords = 0;
	
	if (isalpha(arg[0])) {
		numWords++;
	}

	for (int i = 0; i < arg.size(); i++) {
		if (arg[i] == ' ') {
			numWords++;
		}
	}

	return numWords;
}
