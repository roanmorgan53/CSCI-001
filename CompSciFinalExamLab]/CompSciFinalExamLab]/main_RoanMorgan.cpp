//Roan Morgan
//Final Exam
//12.14.22
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Savings {
private:
	string name;
	double amount;
	int accountNum;

public:
	Savings(string argName, double argAmount, int argAccountNum); //constructor
	void deposit(int arg);
	void withdraw(int arg);
	void display();

	string getName();
	double getAmount();
	double getAccountNum();

	void setName(string arg);
	void setAmount(double arg);
	void setAccountNum(int arg);

};

void displayVect(vector<Savings> argList);

int main(void) {
	
	//project description
	cout << "Credit Union Savings Account\n" << endl;

	//part one !!!!
	Savings myAccount("Roan", 1000, 10001);
	myAccount.display();
	myAccount.deposit(1000); //add money
	myAccount.withdraw(500); //take the money away
	myAccount.display();

	
	vector<Savings> accountList; //part two
	
	srand(time(0));

	string nameList[] = { "Roan", "Preston", "John", "Andrew", "Brian", "Joey", "Daryl", "Emily" };
	
	for (int i = 0; i < 20; i++) {
		Savings temp(nameList[rand() % 8], rand()%10000, 10000+i);
		accountList.push_back(temp);
	}

	displayVect(accountList);

	//I love this class, see you next semester

	return(0);
}

Savings::Savings(string argName, double argAmount, int argAccountNum)
{
	name = argName;
	amount = argAmount;
	accountNum = argAccountNum;
}

void Savings::deposit(int arg)
{
	if (arg >= 0) {
		amount = arg + amount;
	}
}

void Savings::withdraw(int arg)
{
	if (arg >= 0) {
		amount = amount - arg;
	}
}

void Savings::display()
{
	cout << name << endl;
	cout << amount << "$" << endl;
	cout << "#" << accountNum << endl;
	cout << "-------" << endl;
}

string Savings::getName()
{
	return name;
}

double Savings::getAmount()
{
	return amount;
}

double Savings::getAccountNum()
{
	return accountNum;
}

void Savings::setName(string arg)
{
	name = arg;
}

void Savings::setAmount(double arg)
{
	if (arg >= 0) {
		amount = arg;
	}
}

void Savings::setAccountNum(int arg)
{
	if (arg >= 10000 && arg <= 99999) {
		accountNum = arg;
	}
}

void displayVect(vector<Savings> argList)
{
	for (int i = 0; i < argList.size(); i++) {
		argList[i].display();
	}
}
