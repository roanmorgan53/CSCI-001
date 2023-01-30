// Notes on Rectangle Class

#include <iostream>
#include <string>
using namespace std;

// Class Definition
class Rectangle {

	double l, w;
	string units;

public:
	Rectangle(double argl = 1, double argw = 1, string argUnits = "in");

	// Set and get funcitons (new for today)
	double getLength(void);
	void setLength(double argl);

	double getWidth(void);
	void setWidth(double arg2);

	string getUnits(void);
	void setUnits(string arg3);

	double area(void);

};



int main(void) {

	int x(5); //can think of built in data types as objects

	Rectangle myRect(2, 3, "cm");

	cout << "Length: " << myRect.getLength() << endl;
	cout << "Width: " << myRect.getWidth() << endl;
	cout << "Area: " << myRect.area() << " " << myRect.getUnits() << "^2" << endl;

	return(0);
}

//Class Implementations
Rectangle::Rectangle(double argl, double argw, string argUnits) {

	setLength(argl);
	setWidth(argw);
	setUnits(argUnits);

}
double Rectangle::getLength(void) {
	return(l);
}
void Rectangle::setLength(double argl) {
	l = argl;
	// data validation goes here!
	if (argl <= 0)
		l = 1;
}
double Rectangle::getWidth(void) {
	return(w);
}
void Rectangle::setWidth(double arg2) {
	w = arg2;
}

string Rectangle::getUnits(void) {
	return(units);
}
void Rectangle::setUnits(string arg3) {
	units = arg3;
}

double Rectangle::area(void) {
	return(getLength() * getWidth());
}