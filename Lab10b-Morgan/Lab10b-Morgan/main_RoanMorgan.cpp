//Roan Morgan
//11.16.22
//RotN
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <cstdlib>
using namespace std;

class RotN {
private:
	string userMessage;
	int shift;
	string encodedMessage;

public:
	void setUserMessage(string arg); 
	void setShift(int arg);
	string getUserMessage();
	int getShift();
	vector<string> groupChars();


	void display();

};

int main(void) {

	RotN myRotation;
	string UserResponse;
	int shift;

	cout << "Enter a message to encode: ";
	getline(cin, UserResponse);

	cout << "Enter a number to shift by: ";
	cin >> shift;

	myRotation.setUserMessage(UserResponse);
	myRotation.setShift(shift);

	myRotation.groupChars();

	return 0;
}

void RotN::setUserMessage(string arg)
{
	userMessage = arg;
}

void RotN::setShift(int arg)
{
	shift = arg;
}


string RotN::getUserMessage()
{
	return userMessage;
}

int RotN::getShift()
{
	return shift;
}

vector<string> RotN::groupChars()
{
	vector<string> encodedMessage;
	string rawMessage = userMessage;
	int numberAlpha = 0;

	//lowercase the entire string
	for (int i = 0; i < rawMessage.size(); i++) {
		rawMessage[i] = tolower(rawMessage[i]);
	}

	//rawMessage[rawMessage.size()] = ' ';

	for (char letter : rawMessage) {
		if (isalpha(letter)) {
			numberAlpha++;
		}
	}

	for (char letter : rawMessage) {
		if (!isalpha(letter)) {
			remove(rawMessage.begin(), rawMessage.end(), letter);
		}
	}

	rawMessage.resize(numberAlpha);


	////remove everything thats not a letter
	//for (int i = 0; i < rawMessage.size(); i++) {
	//	if (rawMessage[i] < 'a' || rawMessage[i] > 'z') { 
	//		remove(rawMessage.begin(), rawMessage.end(), rawMessage[i]);
	//		
	//	}
	//}

	//rawMessage.resize(numberAlpha);

	cout << rawMessage << endl;

	string temp = "";

	//group every 5 chars in a vector
	for (int i = 1; i <= rawMessage.size(); i++) {
		temp += rawMessage[i - 1];
		if (i % 5 == 0) {
			encodedMessage.push_back(temp);
			temp = "";
		}
	}

	if (encodedMessage.size() % 5 != 0) {
		encodedMessage.push_back(temp);
	}


	
	//print test
	for (int i = 0; i < encodedMessage.size(); i++) {
		cout << encodedMessage[i] << " ";
	}

	while (shift >= 26) {
		shift -= 26;
	}

	

	for (int i = 0; i < encodedMessage.size(); i++) {
		for (int ii = 0; ii < encodedMessage[i].size(); ii++) {
			if (encodedMessage[i][ii] + shift > 122) {
				encodedMessage[i][ii] = encodedMessage[i][ii] - shift;
			}
			else {
				encodedMessage[i][ii] = encodedMessage[i][ii] + shift;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < encodedMessage.size(); i++) {
		cout << encodedMessage[i] << " ";
	}

	return encodedMessage;
}

void RotN::display()
{

	cout << encodedMessage << "";
}
