// A simple example showing the use of getline function. 
#include <iostream>
using namespace std;

int main()
{
    int Size=80;
    char str[Size];

    cout<<"Enter a sentence: ";
    cin.getline(str, Size);  //reads a line of text and stores it in the character array str

    cout<<"The sentence entred is: "<<str;  //displays the sentence entered by the user
    return 0;
}