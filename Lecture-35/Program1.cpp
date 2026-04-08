/* Avoiding a precedence problem between the stream-insertion operator and the 
conditional operator. */

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    cout<<x<<(x==y? " is": " is not")<<" equal to "<<y;
    return 0;
}