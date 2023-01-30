#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

double BMI(int, int, float);

int main() {
	float weight;
	int heightFeet;
	int heightInches;

	//introduce the app
	cout << "BMI Calculator" << endl;

	//prompt the user
	cout << "\nHow tall are you (in feet): ";
	cin >> heightFeet;

	cout << "\nHow tall are you (leftover inches): ";
	cin >> heightInches;

	cout << "\nHow much do you weigh (lbs): ";
	cin >> weight;

	float finalBMI = BMI(heightFeet, heightInches, weight);

	cout << setprecision(2) << fixed << "\nYour BMI is: " << finalBMI << endl;

	if (finalBMI < 18.5){
		cout << "\nYou are Underweight <18.5" << endl;
	}
	else if (finalBMI < 25) {
		cout << "\nYou are Healthy <25" << endl;
	}
	else if (finalBMI < 30){
		cout << "\nYou are Overweight <30" << endl;
	}
	else if (finalBMI >= 30) {
		cout << "\nYou are Obese >= 30" << endl;
	}
	else {
		cout << "\nProgram Error" << endl;
	}
	return 0;
}

double BMI(int heightFeet, int heightInches, float weight) {
	int height = ((heightFeet * 12) + heightInches);
	double BMI = (weight * 703 / (height * height));
	return BMI;
}