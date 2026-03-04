/* This program copies a character array into a given array */ 
#include <iostream>
using namespace std;
int main()
{
    char strA[30]="Diamondluxe Welcomes you";  // a character array initialized with a string
    char strB[30];  // an empty character array to hold the copied string
    char *ptrA, *ptrB;  // two character pointers
   
    ptrA = strA;  // assigning the address of the first element of strA
    ptrB = strB;  // assigning the address of the first element of strB
  
    while (*ptrA != '\0')  // loop until the null terminator is reached 
    {
        *ptrB = *ptrA;  // copying the character from strA to strB
        ptrA++;  // incrementing the pointer to point to the next character in strA
        ptrB++;  // incrementing the pointer to point to the next position in strB
    }
  
    *ptrB = '\0';  // adding the null terminator to the end of strB
   
    cout << "String in strA = " << strA << endl; /* show strA on screen */ 
    cout << "String in strB = " << strB << endl; /* show strB on screen */ 

    return 0;
}