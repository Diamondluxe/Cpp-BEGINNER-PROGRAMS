//This program display the table of any integer up to multiplier 10 
#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Enter an integer to display its multiplication table: ";
    cin >> num;

    cout << "Multiplication Table of " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}