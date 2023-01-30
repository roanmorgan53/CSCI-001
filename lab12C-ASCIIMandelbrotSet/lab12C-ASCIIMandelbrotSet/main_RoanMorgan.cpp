//Roan Morgan
//Lab 12c - ASCII Mandelbrot Set
//12.5.22
#include <iostream>
#include <complex>
using namespace std;

int mandelbrotEscapeNumber(complex<double> c);
char mandelbrotEscapeChar(int i);

int main(void)
{
	cout << "Hello Mandelbrot\n" << endl;

	double y = 1;

	complex<double> a;
	a.real(0.45);
	a.imag(0.5);
	
	for(y = 1; y > -1.2; y -= .1)
	for (double x = -1.5; x < 0.5; x += 0.02) {
		a.real(x);
		a.imag(y);
		int temp = mandelbrotEscapeNumber(a);
		cout << mandelbrotEscapeChar(temp);
	}

	cout << endl;

	

	return(0);
}


//Function Implementation
int mandelbrotEscapeNumber(complex<double> c) {

	complex<double> z;
	int i = 0;

	do {

		z = z * z + c;
		i++;

		if (i >= 255)
			break;

	} while (abs(z) <= 2.0);

	return(i);

}

char mandelbrotEscapeChar(int i) {

	if (i < 5)
		return(' ');
	if (i < 10)
		return(' ');
	if (i < 50)
		return(' ');
	if (i < 100)
		return(' ');
	if (i < 150)
		return(' ');

	return('+');

}