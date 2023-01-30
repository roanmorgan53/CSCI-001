//Roan Morgan
//
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
	int x = 50;
	int tempX = x;

	cout << "Begin with x = " << x << endl;
	cout << "Begin with tempX = " << tempX << endl;

	do{
		cout << bool(tempX) << " * ";
		tempX = tempX / 2;
	} while (tempX > 0);

	cout << "\nENd with x = " << x << endl;
	cout << "End with tempX = " << tempX << endl;
	return(0);
}