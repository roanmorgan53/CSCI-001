// Calculate PI using the Monte Carlo technique

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class Point {
private:
	double x, y;

public:
	Point(double arg1 = 0, double arg2 = 0);
	//accessor methods
	void setX(double arg);
	double getX(void);
	void setY(double arg);
	double getY(void);

	double distanceFromOrigin(void);
	void displayPoint(void);
};

//Function Prototypes
bool runAgain(void);

int main() {

	srand((time(0)));

	int plays = 50000;

	double randX; 
	double randY;

	Point dartTemp;

	double success = 0;

	for (int i = 0; i < plays; i++) {
		double randX = 1.0 * rand() / RAND_MAX;
		double randY = 1.0 * rand() / RAND_MAX;

		dartTemp.setX(randX);
		dartTemp.setY(randY);

		if (dartTemp.distanceFromOrigin() <= 1) {
			success++;
		}
	}

	cout << success / plays << endl;
	cout << "Calculate pi: " << 4 * success / plays << endl;


	return(0);
}

// Function Implementation
bool runAgain(void) {
	char userResponse;

	cout << "\nWould you like to run again (y or n): ";
	cin >> userResponse;

	if (userResponse == 'y')
		return(true);

	return(false);
}

Point::Point(double arg1, double arg2) {

	setX(arg1);
	setY(arg2);

}
void Point::setX(double arg) {
	x = arg;
}
double Point::getX(void) {
	return(x);
}
void Point::setY(double arg) {
	y = arg;
}
double Point::getY(void) {
	return(y);
}
double Point::distanceFromOrigin() {

	return(sqrt(x * x + y * y));

}
void Point::displayPoint(void) {
	cout << "(" << x << "," << y << ")" << endl;
}	