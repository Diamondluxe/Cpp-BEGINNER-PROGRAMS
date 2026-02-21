//This program gets a grade from user and displays a description accordingly 
#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade)
    {
        case 'A':
        case 'a':
            cout << "Excellent!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Very Good!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Good!" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Poor" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Fail" << endl;
            break;
        default:
            cout << "Please Enter the grade from A to D or F!" << endl;
    }

    return 0;
}