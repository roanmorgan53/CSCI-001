#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double f(double x);

int main(){
    //establish a variable
    char userResponse;
    double x;
    cout << "Program Description\n" << endl;
    cout << "\nf(x) = 5x^2-x+7\n";
    do {
        // looped code goes here
        cout << " x | y " << endl;
        for (int i = -1; i <= 2; i++) {
            cout << i << " | " << f(i) << endl;
        }

       /* cout << "\ninput a value of f(x): ";
        cin >> x;
        cout << "\nYour answer is: " << f(x);*/

        cout << "\n\nDo you want to play again? (y/n): ";
        cin >> userResponse;


    } while (userResponse == 'y');

    cout << "\nThank you for playing" << endl;
    return 0;
}

//function implementation
double f(double x) {
    return 5 * (x * x) - x + 7;
}
