#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    //Random Integer X
    srand(time(NULL));
    int randomInt = rand() % 100 + 1;
    //cout << randomInt << endl;

    //Input Y
    int userGuess;
    cout << "Guess the number: ";
    cin >> userGuess;

    //Establish a Control Structure
    if (randomInt > userGuess) {
        cout << "\nToo Low";
        //cin >> userGuess;
    }
    else {
        if (userGuess == randomInt) {
            cout << "\nYou Got It! The Number Was: " << randomInt << endl;
        }
        else if (userGuess > randomInt) {
            cout << "Too High";
            // cin >> userGuess;
        }
    }
    return 0;
}
