/* Program to show the use of macro */
#include<iostream>
using namespace std;

#define square(x) ((x)*(x))
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"The square of "<<num<<" is: "<<square(num)<<endl;
    cout<<"The square of "<<num+2<<" is: "<<square(num+2)<<endl;
    cout<<"The square of "<<7<<" is: "<<square(7)<<endl;


    return 0;
}
