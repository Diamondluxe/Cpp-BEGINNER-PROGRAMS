// This program will print the memory address of a pointer and its incremented address
#include <iostream>
using namespace std;
int main()
{
    int x[10];  // an array of integers
    int *ptr;  // a pointer to an integer
    ptr = x;  // assigning the address of the first element of the array to the pointer

    cout << "The memory address of ptr = " << ptr << endl ; 
    ptr++; // incrementing the pointer to point to the next element
    cout << "The memory address of ptr after incrementing = " << ptr << endl ; 
    return 0;
}