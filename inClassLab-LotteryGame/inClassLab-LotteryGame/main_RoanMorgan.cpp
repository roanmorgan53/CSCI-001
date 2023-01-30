//Roan Morgan
//Lottery Game
//11.2.22
#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int> arg);

int main(void) {
    srand(time(0));

    vector<int> winningTicket;
    vector<int> choices;
    vector<int> userTicket;
    char userResponse = 'y';

    while (userResponse == 'y') {

        int wins = 0;
        winningTicket.clear();
        userTicket.clear();
        choices.clear();

        for (int i = 0; i < 10; i++) {
            choices.push_back(i);
        }

        for (int i = 0; i < 5; i++) {

            int randIndex = rand() % (choices.size() - i);
            winningTicket.push_back(choices[randIndex]);

            int temp = choices[choices.size() - 1];
            choices[randIndex] = temp;
            choices.pop_back();
        }

        do {
            int temp;
            bool isDouble = false;
            cout << "Choose a Number 0 / 9: ";
            cin >> temp;
            for (int i = 0; i < userTicket.size(); i++) {
                if (temp == userTicket[i]) {
                    cout << "Choose a different number (no repeated numbers): " << endl;
                    isDouble = true;
                }
            }
            if (isDouble == false)
                userTicket.push_back(temp);

        } while (userTicket.size() != 3);

        cout << "Win Ticket : ";
        displayVector(winningTicket);

        cout << "User ticket: ";
        displayVector(userTicket);

        for (int i = 0; i < userTicket.size(); i++) {
            for (int w = 0; w < winningTicket.size(); w++) {
                if (userTicket[i] == winningTicket[w]) {
                    wins++;
                }
            }
        }

        cout << "Matches: " << wins << endl;
        cout << "Payout: $" << wins * 5 << endl;
        cout << "\n-----------" << endl;

        cout << "\nPlay again? (y/n): ";
        cin >> userResponse;
        system("cls");
    }

    return 0;
}

void displayVector(vector<int> arg)
{
    for (int i = 0; i < arg.size(); i++) {
        cout << arg[i] << " ";
    }
    cout << endl;
}