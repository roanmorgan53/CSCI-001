//Roan Morgan
//Multiplication Quiz 
//12.12.22
#include <iostream>
#include <iomanip>
using namespace std;

void populateArrays(int arg[], const int size);

char calcGrade(int correct, int totalQuestion);


int main(void) {
	srand(time(0));
	
	//project description
	cout << "Multiplication Quiz App\n" << endl;

	cout << fixed << setprecision(2);

	const int size = 11;
	int firstNum[size];
	int secondNum[size];
	int correct = 0;
	int incorrect = 0;
	int totalQuestions = 10;
	int currentQuestions = 0;

	populateArrays(firstNum, size);
	populateArrays(secondNum, size);

	char userResonse = 'y';

	do {
		currentQuestions = 0;
		correct = 0;
		incorrect = 0;

		do {
			int tempNumOne = firstNum[1 + rand() % 10];
			int tempNumTwo = secondNum[1 + rand() % 10];
			int result = tempNumOne * tempNumTwo;
			int userAnswer;

			cout << "Input The Product of " << tempNumOne << "*" << tempNumTwo << ": ";
			cin >> userAnswer;

			if (userAnswer == result) {
				correct++;
				currentQuestions++;
				cout << "Correct, nice job! Score: " << (1.0*correct/currentQuestions)*100 << "%\n";
			}
			else {
				incorrect++;
				currentQuestions++;
				cout << "Incorrect, use that noggin! Score: " << (1.0 * correct / currentQuestions) * 100 << "%\n";
			}

		} while (currentQuestions < totalQuestions);

		cout << "The Quiz Has concluded and your score was " << (1.0 * correct / totalQuestions) * 100 << "% or " << calcGrade(correct, totalQuestions) << endl << endl;

		cout << "Would you like to retake? (y/n): ";
		cin >> userResonse;

		if (userResonse == 'y') {
			system("cls");
			cout << "Multiplication Quiz App\n" << endl;
		}

	} while (userResonse == 'y');



	return(0);
}

void populateArrays(int arg[], const int size)
{
	for (int i = 1; i < size; i++) {
		arg[i] = i;
	}
}

char calcGrade(int correct, int totalQuestion)
{
	double gradePercentage = 1.0*correct / 1.0*totalQuestion;

	if (gradePercentage >= 90) {
		return 'A';
	}
	else if (gradePercentage >= 80) {
		return 'B';
	}
	else if (gradePercentage >= 70) {
		return 'C';
	}
	else if (gradePercentage >= 60) {
		return 'D';
	}
	else if (gradePercentage < 60) {
		return 'F';
	}
	else {
		return 'E'; //error, not for effort
	}
}
