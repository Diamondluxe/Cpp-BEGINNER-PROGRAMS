//This program converts a string into an uppercase string
#include <iostream>
#include <string>
#include <ctype.h> // for toupper function
using namespace std;
void convertToUppercase(char *str); // function prototype to convert a string to uppercase

int main()
{
    char s[]="DiamondLuxe welcomes you to C++ programming"; // a string initialized with a value
    cout << "The string before conversion is: " << s << endl; // displaying the original string
    convertToUppercase(s); // calling the function to convert the string to uppercase
    cout << "The string after conversion is: " << s << endl; // displaying the converted string
}

void convertToUppercase(char *str) // function definition to convert a string to uppercase
{
    while (*str != '\0') // loop to iterate through each character of the string until we reach the null terminator
    {
        if (islower(*str)) // checking if the character is a lowercase letter using islower function
        *str = toupper(*str); // converting character to uppercase using toupper function
        ++str; // moving to the next character
    }
}