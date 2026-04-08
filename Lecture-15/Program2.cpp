/* This program contains different ways to access array elements */ 
#include <iostream>
using namespace std;
int main()
{
    int y[10]={0,5,10,15,20,25,30,35,40,45};  // an array of integers initialized with values
    int *yptr;
    yptr = y;  // assigning the address of the first element of the array to the pointer
    cout << "Accessing 6 element of array as y[5] = " << y[5] << endl; 
    cout << "Accessing 6 element of array as *(yptr+5) = " << *(yptr+5) << endl; 
    cout << "Accessing 6 element of array as yptr[5] = " << yptr[5] << endl;
    return 0;
}