// A small program shows the use of template function
#include<iostream>
using namespace std;

template<class T>
T larger(T u, T x)
{
    if(u>x)
        return u;
    else
        return x;
}

int main()
{
    int x=8, y=5;
    float a=4.6, b=9.3;
    cout<<"The larger of "<<x<<" and "<<y<<" is "<<larger(x,y)<<endl;
    cout<<"The larger of "<<a<<" and "<<b<<" is "<<larger(a,b)<<endl;
  

    return 0;
}