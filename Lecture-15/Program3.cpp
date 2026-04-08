/* This program steps through an array using pointer */ 
#include <iostream>
using namespace std;
int main()
{
    int x[10]={10,20,30,40,50,60,70,80,90,100};  // an array of integers initialized with values
    int *ptr, i;  
    ptr = x;  // assigning the address of the first element of the array to the pointer

    for(i = 0; i < 10; i++)
    {
        cout << "The value of x[" << i << "] = " << *ptr << endl;  // dereferencing the pointer to get the value at the current position
        ptr++;  // incrementing the pointer to point to the next element in the array
    }
}