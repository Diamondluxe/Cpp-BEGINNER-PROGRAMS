// Example: analysis of text using <ctype.h> library
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char c;
    int lowercase=0, uppercase=0, digit=0, space=0, punct=0, other=0;
     cout << "Please enter a character string and then press ENTER: "; 
        while ((c = cin.get()) != '\n') 
        { 
            if (islower(c)) 
                lowercase++; 
            else if (isupper(c)) 
                uppercase++; 
            else if (isdigit(c)) 
                digit++; 
            else if (isspace(c)) 
                space++; 
            else if (ispunct(c)) 
                punct++; 
            else
                other++; 
        }

    cout << "Your Typed: " << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Digits: " << digit << endl;
    cout << "Spaces: " << space << endl;
    cout << "Punctuation: " << punct << endl;
    cout << "Other characters: " << other << endl;

    return 0;
}