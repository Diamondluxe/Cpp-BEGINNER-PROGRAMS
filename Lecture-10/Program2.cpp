// This program uses pass by reference to modify original value.
#include <iostream>
using namespace std;
 
void square(double*); //function prototype

int main()
{
    double x=123.456;
    
    cout<<"In main(), the value of x is : "<<x<<endl; //value of x is 123.456
   
    square(&x);  //address of x is passed to square() by reference, so the value of x in main() is changed by square() as it is passed by reference
   
    cout<<"Back in main(), the value of x is : "<<x<<endl; //value of x is 15241.4 because the value of x in main() is changed by square() as it is passed by reference
   
    return 0;
}

void square(double* x) //function definition
{
    *x = *x * *x; //value of x is modified in square() by dereferencing the pointer x and multiplying it by itself, which changes the value of x in main() as it is passed by reference
}