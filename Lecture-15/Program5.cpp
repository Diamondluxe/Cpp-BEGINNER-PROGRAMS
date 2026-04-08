/* Program using the pointer subtraction */ 

#include <iostream>
using namespace std;
int main()
{
    int x[10], *ptr1, *ptr2;  // an array of integers and two integer variables to hold pointer values
    ptr1 = &x[0];  // assigning the address of the first element of the array to ptr1
    ptr2 = &x[5];  // assigning the address of the sixth element of the array to ptr2
    cout << "The difference is : "<< ptr2 - ptr1 << endl;
    return 0;
}