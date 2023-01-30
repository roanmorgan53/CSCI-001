//Roan Morgan
//Vectors
//10-24-22
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

struct ComplexNum {
	double a;
	double b;

	double mag(void);
	void print(void);

};

ComplexNum addComplex(ComplexNum arg1, ComplexNum arg2);
ComplexNum subComplex(ComplexNum arg1, ComplexNum arg2);
ComplexNum multiComplex(ComplexNum arg1, ComplexNum arg2);
ComplexNum divComplex(ComplexNum arg1, ComplexNum arg2);
void sumComplex(ComplexNum arg1, ComplexNum arg2);
void differenceComplex(ComplexNum arg1, ComplexNum arg2);
void productComplex(ComplexNum arg1, ComplexNum arg2);
void quotientComplex(ComplexNum arg1, ComplexNum arg2);
int countTarget(vector<ComplexNum>& arg, double argR);

int main(void) {
	srand(time(0));
	
	//project description
	cout << "Complex Target App\n" << endl;

	vector<ComplexNum> a;
	ComplexNum temp;
	double r;
	int upperBound;
	char userResponse = 'y';

	while (userResponse == 'y') {
		cout << "What is the upper bound: ";
		cin >> upperBound;
		cout << "Enter the target radius: ";
		cin >> r;
		cout << endl;

		for (int i = 0; i < 100000; i++) {
			temp.a = pow(-1, rand() % 2) * (rand() % (upperBound - 1) + 1.0 * rand() / RAND_MAX);
			temp.b = pow(-1, rand() % 2) * (rand() % (upperBound - 1) + 1.0 * rand() / RAND_MAX);
			a.push_back(temp);

		}

		int count = countTarget(a, r);

		cout << "\nWe found " << count << " in the target unit circle" << endl;
		cout << "Which is " << 1.0 * count / a.size() * 100 << "% of the values" << endl;

		cout << "\nPlay Again? (y or n): ";
		cin >> userResponse;
		cout << endl;
	}

	return(0);
}

ComplexNum addComplex(ComplexNum arg1, ComplexNum arg2) {

	ComplexNum answer;

	answer.a = arg1.a + arg2.a;
	answer.b = arg1.b + arg2.b;

	return (answer);
}

ComplexNum subComplex(ComplexNum arg1, ComplexNum arg2) {
	ComplexNum answer;

	answer.a = arg1.a - arg2.a;
	answer.b = arg1.b - arg2.b;
	return answer;
}

ComplexNum multiComplex(ComplexNum arg1, ComplexNum arg2) {
	ComplexNum multi;
	ComplexNum answer;

	multi.a = arg1.a * arg2.a;
	multi.b = arg1.b * arg2.b;

	answer.a = multi.a - multi.b;
	answer.b = (arg1.a * arg2.b) + (arg1.b + arg2.a);

	return answer;
}

ComplexNum divComplex(ComplexNum arg1, ComplexNum arg2) {
	ComplexNum answer;
	double denominator = arg2.a * arg2.a + arg2.b * arg2.b;
	answer.a = (arg1.a * arg2.a + arg1.b * arg2.b) / denominator;
	answer.b = (arg1.b * arg2.a - arg1.a * arg2.b) / denominator;
	return answer;
}

void sumComplex(ComplexNum arg1, ComplexNum arg2) {
	cout << "(";
	arg1.print();
	cout << ")";
	cout << " + (";
	arg2.print();
	cout << ") = ";
	addComplex(arg1, arg2).print();
}

void differenceComplex(ComplexNum arg1, ComplexNum arg2) {
	cout << "(";
	arg1.print();
	cout << ")";
	cout << " - (";
	arg2.print();
	cout << ") = ";
	subComplex(arg1, arg2).print();
}

void productComplex(ComplexNum arg1, ComplexNum arg2) {
	cout << "(";
	arg1.print();
	cout << ")";
	cout << " * (";
	arg2.print();
	cout << ") = ";
	multiComplex(arg1, arg2).print();
}

void quotientComplex(ComplexNum arg1, ComplexNum arg2) {
	cout << "(";
	arg1.print();
	cout << ")";
	cout << " / (";
	arg2.print();
	cout << ") = ";
	divComplex(arg1, arg2).print();
}

int countTarget(vector<ComplexNum>& arg, double argR){
	int count = 0;
	//Search for all numbers with mag less than 1
	for (int i = 0; i < arg.size(); i++) {
		if (arg[i].mag() <= argR) {
			count++;
		}
	}
	return count;
}

double ComplexNum::mag(void){
	double d;
	d = sqrt((a * a) + (b * b));
	return (d); 
}

void ComplexNum::print(void) {
	if (b == 1) {
		if (b < 0) {
			cout << a << " - i";
		}
		else {
			cout << a << " + i";
		}
	}
	else {
		if (b < 0) {
			cout << a << " - " << -b << "i";
		}
		else {
			cout << a << " + " << b << "i";
		}
	}
}
