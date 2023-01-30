#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    bool gameTime = true;
    int gameTries = 1;
    //Input Y
    int userGuess;
    srand(time(NULL));
    int randomInt = rand() % 100 + 1;
    do {
        //cout << randomInt << endl;

        cout << "\nGuess the number: ";
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
                cout << "\nToo High";
                // cin >> userGuess;
            }
            else {
                cout << "\nsomething went wrong" << endl;
            }
        }
        if (gameTime == true) {
            string userDecision;
            cout << "\n\nWould you like to play again? (y/n): ";
            cin >> userDecision;
            if (userDecision != "y") {
                cout << "\nThank you for playing!\n";
                return 0;
            }
            else {
                gameTries += 1;
                cout << endl;
                cout << gameTries << " try/s\n";
            }
        }

    } while (gameTime == true);
    return 0;
}
