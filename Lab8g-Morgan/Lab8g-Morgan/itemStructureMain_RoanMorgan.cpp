//Roan Morgan
//Inventory Item Structure 
//10-25-22
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Item {
	string name;
	double wholesaleCost;
	int quantity;
	double markup;
	void print(Item arg);
	double price(Item arg);
};

void printArray(Item arg[], const int size);

int main(void) {
	
	//project description
	cout << "Inventory Item Structure " << endl;

	cout << fixed << setprecision(2);

	const int size = 5;
	Item a[size];

	cout << endl;

	a[0].name = "Gogurt";
	a[0].wholesaleCost = 5.5;
	a[0].quantity = 5;
	a[0].markup = 25;

	a[1].name = "Cheese";
	a[1].wholesaleCost = 10;
	a[1].quantity = 2;
	a[1].markup = 25;

	a[2].name = "Milk";
	a[2].wholesaleCost = 10;
	a[2].quantity = 2;
	a[2].markup = 25;

	a[3].name = "Banana";
	a[3].wholesaleCost = 2.5;
	a[3].quantity = 5;
	a[3].markup = 25;

	a[4].name = "Apple";
	a[4].wholesaleCost = 3.0;
	a[4].quantity = 10;
	a[4].markup = 25;

	printArray(a, size);


	return(0);
}

void Item::print(Item arg){
	cout << "Name: " << arg.name << endl;
	cout << "Wholesale Cost: $" << arg.wholesaleCost << endl;
	cout << "Quantitiy: " << arg.quantity << endl;
	cout << "Markup: " << arg.markup << "%" << endl;
}

double Item::price(Item arg){
	double answer;
	double percentage;

	percentage = (1 + (arg.markup / 100));
	answer = arg.quantity*(percentage * arg.wholesaleCost);
	
	return answer;
}

void printArray(Item arg[], const int size){
	for (int i = 0; i < size; i++) {
		arg[i].print(arg[i]);
		cout << "Retail Price: $" << arg[i].price(arg[i]) << endl<< endl;
	}
}
