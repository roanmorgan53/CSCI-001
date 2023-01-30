#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool y = true; 

int main(void){
	do
	{
		int tip;
		string server;
		float costFood;
		int costTip;
		float costBill;
		float totalTip;

		cout << "Restaurant Tip Calculator" << endl;

		cout << "What was your server's name: ";
		getline(cin, server);

		cout << "\nHow much was your food: ";
		cin >> costFood;

		cout << "\nHow much would you like to tip (10%, 15%, or 20%): ";
		cin >> costTip;
		totalTip = (costTip * 0.01) * costFood;
		costBill = ((totalTip)+costFood);

		cout << fixed << setprecision(2) << endl;
		cout << "\nServer Name:  " << server << endl;
		cout << "  Food Cost:  $" << costFood << endl;
		cout << "        Tip:  $" << totalTip << endl;
		cout << " Total Bill:  $" << costBill << endl;

		char x;

		cout << "\nWould you like to submit another form (y/n):";
		cin >> x;

		if (x == 'n')
		{
			y = false;
		}
	} while (y = true);
}