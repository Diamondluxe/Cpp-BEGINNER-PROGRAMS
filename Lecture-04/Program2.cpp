/* Following program takes the radius of a circle from the user and calculates the 
diameter, circumference and area of the circle and displays the result. */
#include<iostream>
using namespace std;
int main()
{
     double radius, diameter, circumference, area;
     const double PI = 3.14159;
     cout << "Enter the radius of the circle: ";
     cin >> radius;
     diameter = 2 * radius;
     circumference = 2 * PI * radius;
     area = PI * radius * radius;
     cout << "Diameter of the circle is: " << diameter << endl;
     cout << "Circumference of the circle is: " << circumference << endl;
     cout << "Area of the circle is: " << area << endl;
    return 0;
}
