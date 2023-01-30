//Roan Morgan
//
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void) {
	
	//project description
	cout << "Fortnite Lag Switch" << endl;

	const int fortnite = 10;
	char spam[fortnite] = { 'f','o','r','t','n','i','t','e',' ','\0'};
	while (true) {
		for (int i = 0; i < 10; i++) {
			cout << spam[i];
		}
	}

	return(0);
}