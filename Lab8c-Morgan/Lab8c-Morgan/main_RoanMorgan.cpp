//Roan Morgan
//Lab 8c: Triangle Class 
//10-25-22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Triangle{
	double sideA = 0, sideB = 0, sideC = 0;
	string color;

};

void printTriangles(Triangle arg[], const int size);

int main(void) {
	srand(time(0));
	
	//project description
	cout << "Lab 8c: Triangle Class" << endl;

	const int size = 50;
	Triangle myTri[size];

	int a, b, c;

	string color[] = {"blue", "pink", "brown", "white", "grey", "purple"};

	for (int i = 0; i < size; i++) {

		while (true) {

			a = 1 + rand() % 100;
			b = 1 + rand() % 100;
			c = 1 + rand() % 100;

			if (a + b > c && a + c > b && b + c > a) {
				myTri[i].sideA = a;
				myTri[i].sideB = b;
				myTri[i].sideC = c;
				myTri[i].color = color[rand() % 5];
				break;
			}
		}
	}

	printTriangles(myTri, size);


	return(0);
}

void printTriangles(Triangle arg[], const int size){
	for (int i = 0; i < size; i++) {
		cout << "a: " << arg[i].sideA << ", b: " << arg[i].sideB << ", c: " << arg[i].sideC << ", color: " << arg[i].color << endl;
	}
}
