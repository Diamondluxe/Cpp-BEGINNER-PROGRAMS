//Program to display the operation of the strcpy() and strncpy() 
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char string1[15]="String1";
    char string2[15]="String2";
    char string3[15];
    cout << "Before copying: " << endl;
    cout << "string1: " << string1 << endl;
    cout << "string2: " << string2 << endl;
    strcpy(string1, string2);
    cout << "After copying string2 to string1: " << endl;   
    cout << "string1: " << string1 << endl;
    cout << "string2: " << string2 << endl;
    strncpy(string3, string2, 3);
    string3[3] = '\0'; // Null-terminate the string after copying 3 characters
    cout<< "strncpy (string3, string2, 3) = " << string3 << endl;
        return 0;
}