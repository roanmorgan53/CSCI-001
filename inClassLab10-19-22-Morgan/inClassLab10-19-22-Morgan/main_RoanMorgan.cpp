//Roan Morgan
//Vectors and Member Functions
//10.19.22
// Class Notes... rectangle objects using struct

#include <iostream>
#include <string>
using namespace std;

// Rectangle object structure
struct Rectangle {

	double width, length;
	string units;
	string color;

	//function inside a structure = method
	double area(void);
	double perimeter(void);
	void displayInfo(void);

};

void printArrayRectangles(Rectangle* arg, const int argSize);

// Main function
int main(void) {
	srand(time(0));

	const int size = 100;
	Rectangle rectangles[size];

	string units[5] = { "cm", "ft", "yds", "km", "m" };

	for (int i = 0; i < size; i++) {
		rectangles[i].width = rand()%11 + 1.0*rand()/RAND_MAX;
		rectangles[i].length = rand()%11 + 1.0*rand()/RAND_MAX;
		rectangles[i].units = units[rand()%5];
	}

	printArrayRectangles(rectangles, size);
	
	return(0);
}

// Function implementations
double Rectangle::area(void) {
	return(length * width);
}

double Rectangle::perimeter(void){
	return (2*length)+(2*width);
}

void Rectangle::displayInfo(void){
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl; 
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl; 
	cout << "Units: " << units << endl;
	cout << "\n************\n" << endl;
}

void printArrayRectangles(Rectangle* arg, const int argSize){
	for (int i = 0; i < argSize; i++) {
		arg[i].displayInfo();
	}
}
