// A simple example showing the use of read and write functions

#include <iostream>
using namespace std;

int main()
{
    char str[80];
    cout<<"Enter a sentence: ";
    cin.read(str, 20);  //reads a line of text and stores it in the character array str

    cout<<"The sentence entred is: ";
    cout.write(str, cin.gcount());  //displays the sentence entered by the user cin.gcount() returns the number of characters read by the last unformatted input operation, which is used to ensure that only the valid characters are displayed.
    return 0;
}