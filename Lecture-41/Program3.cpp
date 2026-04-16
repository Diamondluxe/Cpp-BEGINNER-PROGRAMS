//An example of overloaded template functions.
#include <iostream>
using namespace std;

template<class A>
void inverse(A &a, A &b)
{
    A temp;
    temp=a;
    a=b;
    b=temp;
}

template<class A>
A inverse(A a)
{
    return (-a);
}

int main()
{
    int x=4, y=9;
    inverse(x,y);
    
    cout<<"x: "<<x<<" y: "<<y<<endl;

    cout<<"x now "<<inverse(x);

    return 0;

}