//Exam One
//Roan Morgan
//10-3-22
#include <iostream>
#include <iomanip>
using namespace std;

bool runAgain(void);
int factorial(int);

int main(void) {
    int t;
    int n;
    cout << fixed << setprecision(3);

    do {
        system("cls");
        cout << "e to the t power" << endl;

        cout << "\nt value: ";
        cin >> t;

        cout << "\nn value: ";
        cin >> n;

        double nState = 0;
        for (int i = 0; i <= n; i++) {
            nState = nState + (pow(t, i) / factorial(i));
        }
        
        cout << "\ne^" << n << " = " << nState;




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

int factorial(int i) {
    if (i == 0) {
        return 1;
    }
    else {
        return i * factorial(i - 1);
    }
}