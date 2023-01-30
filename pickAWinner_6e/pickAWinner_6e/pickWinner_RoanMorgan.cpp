//simple app template
#include <iostream>
#include <string>
using namespace std;

bool runAgain(void);
bool nametime(void);
bool wintime(void);

int main(void) {

    srand(time(0));

    int namenum = 0;
    const int size = 50;
    string a[size];

    do {

        cout << "Pick a Winner" << endl;           
        
        for (int i = 0; i < size; i++) {

            cout << "Enter a name: ";
            getline(cin, a[i]);
            namenum++;

            if (nametime() == false) {
                break;
            }

        }

        while (true) {

            string winner = a[rand() % namenum];
            cout << "\nTHE WINNER IS: " << winner;

            if (wintime() == false)
                break;
        }
        
    } while (runAgain() == true);

    return(0);
}
bool runAgain(void) {

    char userResponse;

    cout << "\nWould you like to run again (y or n): ";
    cin >> userResponse;
    cin.ignore();

    if (tolower(userResponse) == 'y')
        return(true);

    return(false);
}

bool nametime(void) {

    char userResponse;

    cout << "\nWould you like to add another name (y or n): ";
    cin >> userResponse;
    cin.ignore();

    if (tolower(userResponse) == 'y')
        return(true);

    return(false);
}

bool wintime(void) {

    char userResponse;

    cout << "\nWould you like to show another winner? (y or n): ";
    cin >> userResponse;
    cin.ignore();

    if (tolower(userResponse) == 'y')
        return(true);

    return(false);
}