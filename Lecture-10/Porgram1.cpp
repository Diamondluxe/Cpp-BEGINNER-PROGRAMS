
#include<iostream>
using namespace std;

void fun(int); //function prototype

int main()
{
    int i=10;
    cout<<"In main(), the value of i is : "<<i<<endl; //value of i is 10
    fun(i);  //value of i is passed to fun() by value, so a copy of i is created in fun() and the value of i in main() is not changed
    cout<<"Back in main(), the value of i is : "<<i<<endl; //value of i is still 10 because the value of i in main() is not changed by fun() as it is passed by value
    return 0;
}

void fun(int i) //function definition
{
    i*=2;
    cout<<"In function(), the value of i is : "<<i<<endl;  //value of i is 20 because the value of i in fun() is a copy of the value of i in main() and it is modified in fun() but it does not affect the value of i in main()
}