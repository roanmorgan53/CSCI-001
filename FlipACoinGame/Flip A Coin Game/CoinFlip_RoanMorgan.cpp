//Flip A Coin Game
//Roan Morgan
//10-3-22
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void coinflip(void);

int main(void) {
    srand(time(0));

        cout << "Flip A Coin Game\n" << endl;

        coinflip();

    return(0);
}

void coinflip(void) {
    int headCount = 0;
    int tailCount = 0;
    char userin = 'y';
    do {
        cout << "\nFlip a coin (y or n)? ";
        cin >> userin;
        if (userin != 'y') {
            return;
        }

        if (1 + rand() % 2 == 1) {
            cout << "\nResult: Heads" << endl;
            headCount++;
            cout << "Total Heads = " << headCount << "\t" << "( " << (headCount * 1.0 / (headCount + tailCount)) * 100 << "% )" << endl;
            cout << "Total Tails = " << tailCount << "\t" << "( " << (tailCount * 1.0 / (headCount + tailCount)) * 100 << "% )" << endl;
        }
        else {
            cout << "\nResult: Tails" << endl;
            tailCount++;
            cout << "Total Heads = " << headCount << "\t" << "( " << (headCount * 1.0 / (headCount + tailCount)) * 100 << "% )" << endl;
            cout << "Total Tails = " << tailCount << "\t" << "( " << (tailCount * 1.0 / (headCount + tailCount)) * 100 << "% )" << endl;
        }
    } while (userin == 'y');
}