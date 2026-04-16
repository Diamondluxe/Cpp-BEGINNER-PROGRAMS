// A template function example using two generic types
#include<iostream>
using namespace std;

template<class T, class U>
void larger(T a, U b)
{
    if (a>b)
        cout<<"First is larger!"<<endl;
    else
        cout<<"Second is larger!"<<endl;
}

int main()
{
    int a , b;

    cout<<"Write any two character to check larger one. "<<endl;
    cout<<"First character: ";
    cin>>a;
    cout<<"Second character: ";
    cin>>b;
    larger(a,b);

    cout<<"Lets check 2 and 4.5"<<endl;
    larger(a,b);
    cout<<"Lets check A and G"<<endl;
    larger('A','G');

    return 0;
}