//Roan Morgan
//Lab 8d: Triangle Class Methods
//10-25-22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Triangle {
	double sideA = 0, sideB = 0, sideC = 0;
	string color;

	void printProperties(void);
	double area(void);
	double perimeter(void);

};

int main(void) {
	srand(time(0));

	//project description
	cout << "Lab 8c: Triangle Class" << endl;

	const int size = 50;
	Triangle myTri[size];

	int a, b, c;

	string color[] = { "blue", "pink", "brown", "white", "grey", "purple" };

	for (int i = 0; i < size; i++) {

		while (true) {

			a = 1 + rand() % 99;
			b = 1 + rand() % 99;
			c = 1 + rand() % 99;

			if (a + b > c && a + c > b && b + c > a) {
				myTri[i].sideA = a;
				myTri[i].sideB = b;
				myTri[i].sideC = c;
				myTri[i].color = color[rand() % 5];
				break;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		myTri[i].printProperties();
	}


	return(0);
}

void Triangle::printProperties(void){
	cout << "Side A: " << sideA << "\nSide B: " << sideB << "\nSide C: " << sideC << "\nColor: " << color << "\nArea = " << area() << "\nPerimeter = " << perimeter() << endl << endl;
}

double Triangle::area(void){
	double s = (sideA + sideB + sideC) / 2;
	double area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	return area;
}

double Triangle::perimeter(void){

	return (sideA + sideB + sideC);
}


