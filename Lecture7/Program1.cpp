//This program allows the user to guess a character from a to z 
//do-while construct is used to allow five tries for guessing 
#include <iostream>
using namespace std;
int main() 
{
    char guess;
    int tries = 0;

    do {
        cout << "Guess a character from a to z: ";
        cin >> guess;
        tries++;

        if (guess == 'z') {
            cout << "Congratulations! You guessed the correct character in " << tries << " tries." << endl;
            break;
        }
        else {
            cout << "Wrong guess. Try again." << endl;
        }
    } while (tries < 5);

    if (tries == 5 && guess != 'z') {
        cout << "Sorry! You've used all your tries. The correct character was 'z'." << endl;
    }

    return 0;
}