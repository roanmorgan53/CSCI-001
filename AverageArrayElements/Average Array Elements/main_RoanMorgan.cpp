//Roan Morgan
//Average Array Elements
//9-28-22
#include <iostream>
#include <iomanip>
using namespace std;

double average(double arg[], const int size);

int main(void) {
	char gameTime = 'y';

	//project description
	do {
		system("cls");
		cout << "Average Array Elements" << endl;
		cout << endl;


		const int size = 5;
		double data[size];

		for (int i = 0; i < size; i++) {
			cout << "What would you like to be the value of data[" << i << "]: ";
			cin >> data[i];
		}

		cout << endl << "Your Average is: " << average(data, size) << endl;
		cout << endl << "Would you like to play another riveting game of this Average Calculator???!!!!! (y/n): ";
		cin >> gameTime;
	} while (gameTime == 'y');


	return(0);
}

double average(double data[], const int size) {
	double previousNum = 0;
	for (int i = 0; i < size; i++) {
		previousNum += data[i];
		//cout << previousNum << endl;
	}
	return previousNum / size;
}