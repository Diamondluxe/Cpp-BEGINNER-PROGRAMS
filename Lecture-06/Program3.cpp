/*This program calculates the factorial of a given number.*/
#include <iostream> 
using namespace std;
int main() 
{
    int num;
    int factorial = 1;

    cout << "Please Enter the number for factorial: ";
    cin >> num;

    // Check if the number is negative
    if (num < 0) {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    }
    else {
        while(num > 1) {
            factorial *= num;
            num--;
        }
        cout << "The factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}