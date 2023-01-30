//Roan Morgan
//Many Rolls Lab
//9-26-22
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int die(void);

int main(void) {
	srand(time(0));

	//project description
	cout << "50000 Dice Rolls" << endl;

	const int diceNumSize = 13;
	int diceNum[diceNumSize];
	int roll;
	int largeNumber = 50000;

	//initialize all variables to 0
	for (int i = 0; i < diceNumSize; i++) {
		diceNum[i] = 0;
	}

	for (int i = 0; i < largeNumber; i++) {
		roll = die() + die();
		diceNum[roll]++;
	}

	for (int i = 0; i < diceNumSize; i++) {
		cout << "a[" << i << "] = " << diceNum[i] << " probability " << diceNum[i]*100.0 / largeNumber << "%" << endl;
	}

	return(0);
}

int die(void) {
	return (1 + (rand() % 6));
}