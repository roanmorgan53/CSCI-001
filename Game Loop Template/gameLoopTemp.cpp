#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    //establish a variable
    char userResponse;
    cout << "Program Description\n" << endl;

    do {
    // looped code goes here
        cout << "Do you want to play again? (y/n): ";
        cin >> userResponse;


    } while (userResponse = "y");

    cout << "Thank you for playing" << endl;

    return 0;
}
