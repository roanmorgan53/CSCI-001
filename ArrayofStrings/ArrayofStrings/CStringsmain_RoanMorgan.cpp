//Roan Morgan
//
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printUpperCase(char arg[]);
void printUpperCaseString(string arg);
void printDashSpace(string arg);

int main(void) {
	
	char strings[] = "roan morgan";

	string stringAdv = "this is pretty sick";

	string stringSpaces = "in class lab 7b";

	printUpperCase(strings);

	printUpperCaseString(stringAdv);

	printDashSpace(stringSpaces);

	return(0);
}

void printUpperCase(char arg[]) {
	int i = 0;
	do{
		if (arg[i] == ' ' || arg[i+1] == ' ') {
			arg[i] = toupper(arg[i]);
			cout << arg[i] << " ";
			i++;
		}
		else {
			arg[i] = toupper(arg[i]);
			cout << arg[i] << "-";
			i++;
		}
	} while (arg[i] != '\0');
	cout << endl;
}

void printUpperCaseString(string arg) {
	int i = 0;
	do {
		if (arg[i] == ' ' || arg[i + 1] == ' ') {
			arg[i] = toupper(arg[i]);
			cout << arg[i] << " ";
			i++;
		}
		else {
			arg[i] = toupper(arg[i]);
			cout << arg[i] << "-";
			i++;
		}
	} while (i != arg.size());
	cout << endl;
}

void printDashSpace(string arg) {
	int i = 0;
	for (int i = 0; i != arg.size(); i++) {
		if (arg[i] == ' ') {
			cout << '_';
		}
		else {
			cout << arg[i];
		}
	}
	cout << endl;
}
