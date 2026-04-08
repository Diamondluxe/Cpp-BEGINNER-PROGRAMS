/* Program using the dereference pointer comparison */ 
#include <iostream>
using namespace std;
int main()
{
    int x,y,*xptr,*yptr;
    cout << "Please enter a value for x: ";  // prompting user to enter a value for x
    cin >> x;  // taking input for x
    cout << "Please enter a value for y: ";  // prompting user to enter a value for y
    cin >> y;  // taking input for y
    xptr = &x;  // assigning the address of x to xptr
    yptr = &y;  // assigning the address of y to yptr
    if (*xptr > *yptr)  // comparing the values pointed to by xptr and yptr
    {
        cout << "The value of x is greater than y" << endl; 
    }
    else if (*xptr < *yptr)
    {
        cout << "The value of y is greater than x" << endl;
    }
    else
    {
        cout << "The value of x and y are equal" << endl; 
    }
    return 0;
}