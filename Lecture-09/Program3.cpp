// This program is calling a function to test the given number is even or not 
#include <iostream>
using namespace std;

// Function to check if a number is even
int isEven(int number)
{
    if ( 2 * ( number / 2 ) == number ) 
        return 1; // Return 1 if the number is even
    else
        return 0; // Return 0 if the number is odd
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num; // Get the number from user input

    if (isEven(num)) // Call the isEven function and check the result
        cout << " The number entered is even " << endl; // Display if the number is even
    else
        cout << " The number entered is odd " << endl; // Display if the number is odd

    return 0; 
}