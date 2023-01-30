//Roan Morgan
//Classes Notes
//11.2.22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Rectangle {
	
	private: //usually properties go here
		double l, w;
		string color;

	public:	//usually methods are public
		Rectangle(double argL = 0.0, double argW = 0.0, string argC = "White");

		//accessor methods - give access to color prop
		void setColor(string argC);
		string getColor(void);
		void setLength(double argL);
		double getLenth(void);
		void setWidth(double argW);
		double getWidth(void);

		void printProperty(void);
		double area(void);
		double perimeter(void);
		
};

int main(void) {
	
	//project description
	cout << "Classes in C++\n" << endl;

	Rectangle x(45.2,20.33,"Blue"); //free constructor call
	x.printProperty();

	cout << endl;

	Rectangle y(5, 3, "red");
	y.printProperty();

	cout << endl;

	Rectangle z(7, 2, "black");
	z.printProperty();

	cout << endl;

	return(0);
}

Rectangle::Rectangle(double argL, double argW, string argC){ //constructor implementation
	setLength(argL);
	setWidth(argW);
	setColor(argC);
}

void Rectangle::setColor(string argC){
	color = argC;
}

string Rectangle::getColor(void){
	return string(color);
}

void Rectangle::setLength(double argL)
{
	if (argL < 0) { //data validation is done in the set methods
		l = 0;
	}
	else {
		l = argL;
	}
}

double Rectangle::getLenth(void)
{
	return double(l);
}

void Rectangle::setWidth(double argW)
{	
	if (argW < 0) {
		w = 0;
	}
	else {
		w = argW;
	}
}

double Rectangle::getWidth(void)
{
	return double(w);
}

void Rectangle::printProperty(){
	cout << "\nColor: " << getColor() << endl;
	cout << "Length: " << getLenth() << endl;
	cout << "Width: " << getWidth() << endl;
	cout << "Area: " << area() << "cm^2" << endl;
	cout << "Perimeter: " << perimeter() << "cm" << endl;
}

double Rectangle::area(void){
	return (getWidth()*getLenth());
}

double Rectangle::perimeter(void){
	return (2*getLenth()+2*getWidth());
}




