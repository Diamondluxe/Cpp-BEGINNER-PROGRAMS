//This program is calling a function raiseToPow. 
#include <iostream>
using namespace std;
// Function to calculate x raised to the power of an integer
double raiseToPow(double x, int power)
{
    double result = 1.0; // Initialize result to 1
    for (int i = 0; i < power; i++) // Loop to multiply x by itself power times
    {
        result *= x; // Multiply result by x in each iteration
    }
    return result; // Return the final result
}
int main()
{
    double x;
    int power;
    cout << "Enter the Number: ";
    cin >> x; // Get the base value from user input
    cout << "Please enter the integer power that you want this number raised to: ";
    cin >> power; // Get the exponent value from user input

    cout << x << " raise to power " << power << " is: " << raiseToPow(x, power) << endl; // Display the result

    return 0; 
}