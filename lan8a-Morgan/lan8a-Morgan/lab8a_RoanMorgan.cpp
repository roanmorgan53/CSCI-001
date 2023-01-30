//Roan Morgan
//Lab 8a: Student Structure
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

int main(void) {
	
	//project description
	cout << "Lab 8a: Student Structure" << endl << endl;

	Student myStudent;

	cout << "Student First Name: ";
	getline(cin, myStudent.fname);

	cout << "Student Last Name: ";
	getline(cin, myStudent.lname);

	cout << "School Name: ";
	getline(cin, myStudent.school);

	cout << "GPA: ";
	cin >> myStudent.gpa;
	cout << endl;

	cout << "\n**************\n" << endl;

	printStudent(myStudent);

	return(0);
}

void printStudent(Student arg){
	cout << "Name: " << arg.fname << " " << arg.lname << endl;
	cout << "School: " << arg.school << endl;
	cout << "GPA: " << arg.gpa << endl;
}
