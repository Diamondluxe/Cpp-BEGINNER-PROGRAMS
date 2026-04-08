// A macro vs. an inline function 
#include <iostream>
using namespace std;

#define MAX(A,B) ((A)>(B)?(A):(B)) //macro definition for finding the maximum of two values
inline int max(int a, int b){  //inline function definition for finding the maximum of two values
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int i,x,y;
    x=23;
    y=45;

    i=MAX(x++,y++);  //using the macro to find the maximum of x and y
    cout<<"Maximum using macro: "<<i<<endl;
    cout<<"x = "<<x<<", y = "<<y<<endl;

    x=23;  //resetting x and y to their original values
    y=45;
    i=max(x++,y++);  //using the inline function to find the maximum of x and y
    cout<<"Maximum using inline function: "<<i<<endl;
    cout<<"x = "<<x<<", y = "<<y<<endl;

    return 0;
}