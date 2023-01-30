//Roan Morgan
//Lab 8b: Student Array
//10.17.22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
	string fname;
	string lname;
	string school;
	double gpa;
};

void printStudent(Student arg);
void capitalize(Student& arg); //you need to use the address because if passed by value it is not possible to change the value of the char to uppercase

int main(void) {

	//project description
	cout << "Lab 8a: Student Structure" << endl << endl;
	const int size = 3;
	Student students[size];

	for (int i = 0; i < size; i++) {
		 cout << "Student First Name: ";
		getline(cin, students[i].fname);

		cout << "Student Last Name: ";
		getline(cin, students[i].lname);

		cout << "School Name: ";
		getline(cin, students[i].school);

		cout << "GPA: ";
		cin >> students[i].gpa;
		cout << endl;

		cout << "\n**************\n" << endl;
		cin.ignore();
	}

	system("cls");

	for (int i = 0; i < size; i++) {
		capitalize(students[i]);
		printStudent(students[i]);

	}

	return(0);
}

void printStudent(Student arg) {
	cout << "Name: " << arg.fname << " " << arg.lname << endl;
	cout << "School: " << arg.school << endl;
	cout << "GPA: " << arg.gpa << endl;

	cout << "\n**************\n" << endl;
}

void capitalize(Student& arg){
	arg.fname[0] = toupper(arg.fname[0]);
	arg.lname[0] = toupper(arg.lname[0]);
	arg.school[0] = toupper(arg.school[0]);
}
