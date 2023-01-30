//Roan Morgan
//Lab 9a: Vector of Strings
//10.31.22
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

void printStrings(vector<string> arg);
string randomString(vector<string> arg);

int main(void) {

	srand(time(0));
	
	//project description
	cout << "Lab 9a: Vector of Strings" << endl << endl;

	vector<string> userStrings;

	while(true){
		cout << "Add a word (enter to exit): ";
		string answer;
		getline(cin, answer);

		if (answer == "") {
			break;
		}
		else {
			userStrings.push_back(answer);
			system("cls");
		}
	}

	printStrings(userStrings);
	randomString(userStrings);

	return(0);
}

void printStrings(vector<string> arg){
	for (int i = 0; i < arg.size(); i++) {
		cout << i+1 << " = " << arg[i] << endl;
	}
}

string randomString(vector<string> arg){
	cout << "Random String" << endl;
	cout << arg[rand() % arg.size()] << endl;
	return string();
}
