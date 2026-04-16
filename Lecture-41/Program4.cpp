//An example of forcing the template functions for some specific data type 
#include<iostream>
using namespace std;

template<class A, class B>

A reverse(B j)
{
    return (-j);
}

int main()
{
    double a=8.8;

     //calling function as double reverse(int)
    cout<<  reverse<double,int>(a)  <<endl;


     //calling function as double reverse(double)
    cout<<  reverse<double>(a)  <<endl;


     //calling function as int reverse(double)
    cout<<  reverse<int,double>(a)  <<endl;


     //calling function as reverse(int)
    cout<<  reverse<int>(a)  <<endl;


}