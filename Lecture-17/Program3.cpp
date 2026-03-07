//This program demonstrate the use of atoi function
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int anInteger;
    char myInteger[20];
    cout << "Please enter an integer between 10-100: ";
    cin >> myInteger;
    if(atoi(myInteger) == 0 )
    {
        cout << "Error: Not a valid Input!" << endl;
    }
    else{
        anInteger = atoi(myInteger);
        if(anInteger < 10 || anInteger > 100)
        {
            cout << "Error: Out of range!" << endl;
        }
        else
        {
            cout << "Okay! You entered " << anInteger << endl;
        }
    }
}