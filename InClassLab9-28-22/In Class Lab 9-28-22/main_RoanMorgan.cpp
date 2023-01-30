//simple app template
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

bool runAgain(void);

int main(void) {
    srand(time(0));

    do {
        
        cout << "Random Char a-z: " << char(97 + rand() % 26);





    } while (runAgain() == true);

    return(0);
}
bool runAgain(void) {
    char userResponse;

    cout << "\nWould you like to run again (y or n): ";
    cin >> userResponse;
    cin.ignore();

    if (userResponse == 'y' || userResponse == 'Y')
        return(true);

    return(false);
}