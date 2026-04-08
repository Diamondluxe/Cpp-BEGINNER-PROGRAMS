/* This program calculates the average age of a class of ten students after prompting 
e user to enter the age of each student. */ 
#include <iostream>
using namespace std;

int main() {
    int age[10];
    int total = 0;
    int average;

    for(int i=0; i<10; i++) {
        cout << "Enter the age of student " << i+1 << " : ";
        cin >> age[i];
        total += age[i];
    }

    average = total / 10;
    cout << "Average age of class is : " << average << endl;

    return 0;
}
