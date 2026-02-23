// This program calculates the area of a ring
#include <iostream>
using namespace std;
double circleArea(double radius)
{
    return 3.14 * radius * radius; // Calculate area of a circle using the formula A = πr^2
}   
int main()
{
    double Rad1, Rad2, ringArea;
    cout << "Enter the outer radius of the ring: ";
    cin >> Rad1; //Get the outer radius from user input
    cout << "Enter the inner radius of the ring: ";
    cin >> Rad2; // Get the inner radius from user input

    ringArea = circleArea(Rad1) - circleArea(Rad2); // Calculate area of the ring by subtracting the area of the inner circle from the area of the outer circle
    cout<< " Area of the ring having inner radius " << Rad2 << " and the outer radius " << Rad1 << " is " << ringArea ; 

    return 0;
}