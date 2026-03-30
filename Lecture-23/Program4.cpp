/* A simple program using the area of circle formula as macro */ 

#include <iostream>
using namespace std;

#define PI 3.14159
#define CIRCLEAREA(x) (PI*(x)*(x))

int main(){
    int radius;
    cout<<"Enter the radius of the circle: ";   
    cin>>radius;
    cout<<"The area of the circle is: "<<CIRCLEAREA(radius)<<endl;
    return 0;
}