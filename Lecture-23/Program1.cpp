/* Program to show the usage of define */ 
#include <iostream>
using namespace std;

#define PI 3.14159

int main(){
    int radius;
    cout<<"Enter the radius of the circle: ";   
    cin>>radius;
    cout<<"The area of the circle is: "<<PI*radius*radius<<endl;
    return 0;
}