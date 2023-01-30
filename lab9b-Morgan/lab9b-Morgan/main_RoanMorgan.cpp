//Roan Morgan
//Lab 9b: Search A Vector
//10.31.22
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int searchVector(vector<string> vecArg, string target);

int main(void) {
	
	//project description
	cout << "Lab 9b: Search A Vector" << endl;
	
	vector<string> wordList;

	wordList.push_back("Roan");
	wordList.push_back("Preston");
	wordList.push_back("Andrew");
	wordList.push_back("John");
	wordList.push_back("Jacob");
	wordList.push_back("George");
	wordList.push_back("Lewis");
	wordList.push_back("Lucy");
	wordList.push_back("Alfred");
	wordList.push_back("Louie");

	cout << endl << "Name Group" << endl;

	for (int i = 0; i < wordList.size(); i++) {
		cout << wordList[i] << endl;
	}

	cout << "\nInput a name to search: ";
	string target;
	getline(cin, target);

	searchVector(wordList, target);

	return(0);
}

int searchVector(vector<string> vecArg, string target){
	for (int i = 0; i < vecArg.size(); i++) {
		if (vecArg[i] == target) {
			cout << vecArg[i] << " is number " << i + 1 << " in the list";
		}
	}
	return 0;
}
