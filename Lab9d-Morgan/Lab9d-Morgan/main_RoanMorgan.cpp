//Roan Morgan
//11.8.22
//Lab 9d: Model a Line (Given Two Points) 

#include <iostream>
#include <iomanip>
using namespace std;

class Point {
private:
	double x = 0, y = 0;
public:
	void setX(double argX);
	double getX(void);
	void setY(double argY);
	double getY(void);
};

class Line {
private:
	Point p1, p2;
public:
	void setPoint1(Point point1);
	Point getPoint1(void);
	void setPoint2(Point point2);
	Point getPoint2(void);
	double calcSlope(void);
	double calcYint(void);
	void printSlopeIntercept(void);
	double evaluateX(double argInput);
};

int main(void) {
	
	//project description
	cout << "Lab 9d: Model a Line (Given Two Points)" << endl << endl;

	double x = 5;

	Point one, two;

	one.setX(1);
	one.setY(3);
	two.setX(4);
	two.setY(6);

	Line test;
	test.setPoint1(one);
	test.setPoint2(two);

	test.printSlopeIntercept();
	
	cout << "when x = " << x << ", y = " << test.evaluateX(x) << endl;

	return(0);
}

void Point::setX(double argX){
	x = argX;
}

double Point::getX(void)
{
	return x;
}

void Point::setY(double argY)
{
	y = argY;
}

double Point::getY(void)
{
	return y;
}

void Line::setPoint1(Point point1){
	p1 = point1;
}

Point Line::getPoint1(void)
{
	return p1;
}

void Line::setPoint2(Point point2)
{
	p2 = point2;
}

Point Line::getPoint2(void)
{
	return p2;
}

double Line::calcSlope(void)
{
	double m;
	m = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());

	return m;
}

double Line::calcYint(void)
{
	double b;
	b = (p1.getY() - (p1.getX() * (calcSlope())));

	return b;
}

void Line::printSlopeIntercept(void)
{
	if (calcYint() >= 0) {
		cout << "y = " << calcSlope() << "x + " << calcYint() << endl;
	}
	else {
		cout << "y = " << calcSlope() << "x - " << calcYint() * -1 << endl;
	}
	
}

double Line::evaluateX(double argInput)
{
	double answer;
	answer = (calcSlope() * argInput + calcYint());
	return answer;
}
