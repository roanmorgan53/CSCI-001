// Rectangle Calculator
// Roan Morgan
// 8/22/22

#include <iostream>
using namespace std;

bool Y = true;

int main(void) {
	do{
		double l, w;
		double a, p;
		//inform user and prompt action
		cout << "Rectangle Calculator 4.99$" << endl;
		cout << endl;

		//length grabber
		cout << "Determine the length of the box: ";
		cin >> l;
		cout << "\n\tThe length of the box is now set as: " << l << endl;
		cout << endl;

		//width grabber
		cout << "Now determine the width of the box: ";
		cin >> w;
		cout << endl;
		cout << "\tThe width is now set as: " << w << endl;

		a = w * l;
		p = (2 * w) * (2 * l);

		//Area Calculator
		cout << endl;
		cout << "Box Area: " << endl;
		cout << endl;
		cout << "\tArea = " << w << " * " << l << " = ";
		cout << a << " square units" << endl; //solution

		//Perimeter Calculator
		cout << "\nHere is your perimeter as well: " << endl;
		cout << "\n\tPerimeter = " << p << " units" << endl;

		//Play Again
		cout << "\n Would you like to calculate a new box? Y/N: ";
		string result;
		cin >> result;
		if (result != "Y") {
			Y = false;
		}

	} while (Y = true);




	return(0);
}