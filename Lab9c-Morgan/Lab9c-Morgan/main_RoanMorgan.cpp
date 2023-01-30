//Roan Morgan
//Lab 9c: Model a Line ( y = mx + b ) 
//11.2.22
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Line {
	private:
		double m, b;

	public:
		Line(double argM = 0.0, double argB = 0.0);
		void setSlope(double argM);
		double getSlope(void);
		void setB(double argB);
		double getB(void);

		void printFunction(void);
		double lineEvaluation(double x);

};

int main(void) {
	
	//project description
	cout << "Lab 9c: Model a Line ( y = mx + b ) " << endl << endl;

	double x = 5;

	vector<Line> test;

	Line line1;
	Line line2;
	Line line3;
	Line line4;
	Line line5;

	line1.setSlope(10);
	line1.setB(5);
	test.push_back(line1);

	line2.setSlope(2.0);
	line2.setB(10.0);
	test.push_back(line2);

	line3.setSlope(10.5);
	line3.setB(2.2);
	test.push_back(line3);

	line4.setSlope(3.8);
	line4.setB(5.6);
	test.push_back(line4);

	line5.setSlope(8.9);
	line5.setB(5.1);
	test.push_back(line5);

	for (int i = 0; i < test.size(); i++) {
		test[i].printFunction();
		cout << "When x = " << x << ", the y value is " << test[i].lineEvaluation(x);
		cout << endl << endl;
	}

	return(0);
}

Line::Line(double argM, double argB){
	getSlope();
	getB();
}

void Line::setSlope(double argM){
	m = argM;
}

double Line::getSlope(void){
	return m;
}

void Line::setB(double argB){
	b = argB;
}

double Line::getB(void){
	return b;
}

void Line::printFunction(void){

	if (getB() >= 0) {
		cout << "y = " << getSlope() << "x + " << getB() << endl;
	}
	else {
		cout << "y = " << getSlope() << "x - " << getB() << endl;
	}
}

double Line::lineEvaluation(double x){
	double answer;

	answer = getSlope() * x + getB();

	return answer;
}


