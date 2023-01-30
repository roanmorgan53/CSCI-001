#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string userName;
	string userMajor;
	string userMath;
	string userApp;
	string userComputer;

	cout << "User Profile" << endl;

	//create a user profile
	cout << "\nInput your name: ";
	getline(cin, userName);

	cout << "Input your major: ";
	getline(cin, userMajor);

	cout << "Input your current level of math: ";
	getline(cin, userMath);

	cout << "Input your favorite game/app: ";
	getline(cin, userApp);

	cout << "Input your home computer: ";
	getline(cin, userComputer);

	cout << "\nThis is your User Profile" << endl;

	//relay the information back to the user
	cout << "\nMy name is: " << userName << endl;
	cout << "My major is: " << userMajor << endl;
	cout << "My current or last math class is: " << userMath << endl;
	cout << endl;
	cout << "My favorite Game/App: " << userApp << endl;
	cout << "My home computer is: " << userComputer << endl;

	return 0;
}