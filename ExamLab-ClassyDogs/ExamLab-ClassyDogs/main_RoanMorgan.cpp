//Roan Morgan
//Exam #2: Classy Dogs 
//11.21.22
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

class Dog {
private:
	string name = "Fido";
	string breed = "German Shephard";
	int age = 13;
	int id = 11111;
public:
	Dog();
	void setName(string);
	void setBreed(string);
	void setAge(int);
	void setId(int);
	string getName();
	string getBreed();
	int getAge();
	int getId();

	void display();
	int humanAge();


};

int main(void) {
	srand(time(0));
	//project description
	cout << "Exam #2: Classy Dogs \n" << endl;

	vector<Dog> dogList;

	string randName[] = { "Fido", "Kikei", "Bob", "Winston", "Robert", "Mike", "George", "James", "Preston", "Andrew" };
	string randBreed[] = { "German Shephard", "Black Lab", "Shitzu", "Pomeranian", "Pitbull" };

	Dog temp;

	for (int i = 0; i < 100; i++) {
		temp.setName(randName[rand() % 10]);
		temp.setBreed(randBreed[rand() % 5]);
		temp.setAge(rand() & 20);
		temp.setId(i + 10000);
		dogList.push_back(temp);
	}

	for (int i = 0; i < dogList.size(); i++) {
		dogList[i].display();
	}

	return(0);
}

Dog::Dog(){
	string name;
	string breed;
	int age;
	int id;
}

void Dog::setName(string arg)
{
	name = arg;
}

void Dog::setBreed(string arg)
{
	breed = arg;
}

void Dog::setAge(int arg)
{
	if(age >= 0)
	age = arg;
}

void Dog::setId(int arg)
{
	if (arg > 10000) {
		id = arg;
	}
}

string Dog::getName()
{
	return name;
}

string Dog::getBreed()
{
	return breed;
}

int Dog::getAge()
{
	return age;
}

int Dog::getId()
{
	return id;
}

void Dog::display()
{
	cout << "Name: " << name << endl;
	cout << "Breed: " << breed << endl;
	cout << "Age: " << age << endl;
	cout << "Human Age: " << humanAge() << endl;
	cout << "id: " << id << endl;
	cout << "\n---------------\n";
}

int Dog::humanAge()
{
	int humanAge = age * 7;
	return humanAge;
}
