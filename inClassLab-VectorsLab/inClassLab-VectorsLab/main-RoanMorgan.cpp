//Roan Morgan
//Complex Numbers
//10-24-22
#include <iostream>
#include <iomanip>
using namespace std;

struct ComplexNum {
	double a;
	double b;

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

int main(void) {

	ComplexNum z, w, sum;
	z.a;
	z.b;
	w.a;
	w.b;

	char userResponse = 'y';

	//project description
	cout << "Complex Numbers Lab" << endl << endl; //domain knowledge

	while (userResponse != 'n') {
		//user interface
		cout << "Enter the real part: ";
		cin >> z.a;

		cout << "Enter the imaginary part: ";
		cin >> z.b;

		cout << endl;

		cout << "Enter the second real part: ";
		cin >> w.a;

		cout << "Enter the second imaginary part: ";
		cin >> w.b;

		cout << endl;



		//adding complex numbers
		sumComplex(z, w);
		cout << endl;

		//subtracting complex numbers
		differenceComplex(z, w);
		cout << endl;

		//multiplying complex numbers
		productComplex(z, w);
		cout << endl;

		//divinding complex numbers
		quotientComplex(z, w);
		cout << endl;

		cout << "\nWant to do more complex numbers (y/n): ";
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
