/* Program using pointer arithmetic */ 
#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int *ptr;  // a pointer to an integer
    ptr = &x;  // assigning the address of x to the pointer
    cout << "The address ptr points to = " << ptr << endl ; 
    cout << "The contents ptr points to = " << *ptr << endl;
    (*ptr)++; // incrementing the value pointed to by ptr
    cout << "After increment, the contents are " << *ptr << endl; 
    cout << "The value of x is " << x << endl;
    return 0;
}