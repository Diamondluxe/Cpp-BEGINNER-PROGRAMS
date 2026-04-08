/* program uses the multi-dimensional array name as pointer */ 
#include <iostream>
using namespace std;
int main()
{
    int multi[2][3];
    
    cout<<"The value of multi is " << multi << endl;  // printing the value of multi, which is the address of the first element of the array
    cout<<"The value of *multi is " << *multi << endl;  // printing the value of *multi, which is the address of the first element of the first row of the array
return 0;
}
