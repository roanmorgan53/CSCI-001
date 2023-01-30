//Roan Morgan
//Object Oriented Design
//10.17.22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Circle {
	//class properties
	double x, y; //coords of the center point of the circle
	double r; //radius
	double stroke;
	string strokeColor;
	string fillColor;

};

void printCircle(const Circle& arg);
double circArea(Circle& arg);

int main(void) {
	
	//project description
	cout << "Circle Structure" << endl << endl;

	Circle myCircle;

	myCircle.x = 1.5;
	myCircle.y = 2.0;
	myCircle.r = 5;
	myCircle.stroke = 10.8;
	myCircle.strokeColor = "black";
	myCircle.fillColor = "blue";

	printCircle(myCircle);
	circArea(myCircle);
	cout << endl << "Circle Area: " << circArea(myCircle) << endl;

	return(0);
}

void printCircle(const Circle& arg){
	cout << "Center Coords: " << "(" << arg.x << "," << arg.y << ")" << endl;
	cout << "Radius: " << arg.r << endl;
	cout << "Stroke: " << arg.stroke << endl;
	cout << "Stroke Color: " << arg.strokeColor << endl;
	cout << "Fill Color: " << arg.fillColor << endl;
}

double circArea(Circle& arg){

	return (3.14159265359*arg.r*arg.r);
}
