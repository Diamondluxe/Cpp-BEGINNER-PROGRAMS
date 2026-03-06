// Card shuffling and dealing program
#include <iostream>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()
using namespace std;
// Function prototypes
void shuffle(int deck[][13]);
void deal(int deck[][13], const char* [], const char* []);

int main() {
    // Initialize the deck of cards
    int deck[4][13] = {0};
    const char *suite[ 4 ] = {"Hearts", "Diamonds", "Clubs", "Spades" }; 
    const char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", 
"Eight", "Nine", "Ten", "Jack", "Queen", "King"};
 
    srand( time( 0 ) ); // Seed the random number generator

    // Shuffle the deck
    shuffle(deck);
    // Deal the cards
    deal(deck, suite, face);
    return 0;
}

// Shuffle the deck of cards
void shuffle(int deck[][13]) {
    for (int card = 1; card <= 52; card++) {
        int row, column;
        do {
            row = rand() % 4;    // Random row (0-3)
            column = rand() % 13; // Random column (0-12)
        } while (deck[row][column] != 0); // Ensure the card is not already dealt
        deck[row][column] = card; // Mark the card as dealt
    }
}

// Deal the cards to four players
void deal(int deck[][13], const char* suite[], const char* face[])
 {
    for (int card = 1; card <= 52; card++) // Loop through each card in the deck
    {
        for (int row = 0; row < 4; row++)  // Loop through each suit
        {
            for (int column = 0; column < 13; column++)  // Loop through each face value
            {
                if (deck[row][column] == card)  // If the card matches the current card number, print it
                 {
                    cout << card << ": " << face[column] << " of " << suite[row] << endl;
                }
            }
        }
    }
}
