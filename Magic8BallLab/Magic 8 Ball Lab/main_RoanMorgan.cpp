//Roan Morgan
//9-28-22
//Magic 8 Ball Lab
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

bool runAgain(void);

int main(void) {

    srand(time(0));

    do {
        string userInput;
        system("cls");
        cout << "Magic 8 Ball\n" << endl;
        
        const int choices = 20;
        string phrase[choices] = {
            "It is certain.",
            "It is decidedly so.",
            "Without a doubt.",
            "Yes, definitely.",
            "You may rely on it",
            "As I see it, yes.",
            "Most likely.",
             "Outlook good.",
            "Yes",
            "Signs point to yes.",
            "Reply hazy, try again",
            "Ask again later.",
            "Better not tell you now",
            "Cannot predict now.",
            "Concentrate and ask again.",
            "Don't count on it.",
            "My reply is no.",
            "My sources say no.",
            "Outlook not so good.",
            "Very doubtful.",
        };

        cout << "What would you like to ask the magic 8 ball: ";
        getline(cin, userInput);

        cout << endl;

        for (int i = 0; i < 1; i++) {
            cout << phrase[(rand() % choices)] << endl;
        }



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