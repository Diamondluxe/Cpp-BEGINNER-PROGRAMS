//This program illustrates the construction and destruction orders of objects.
#include<iostream>
using namespace std;

class A{
    public:
        A()
        {
            cout<<"\n A constructor..";
        }
        ~A()
        {
            cout<<"\n A destructor..";
        }
};

class B{
    private:
        A a;
    public:
        B()
        {
            cout<<"\n B costructor..";
        }
        ~B()
        {
            cout<<"\n B destructor..";
        }
};

int main()
{
    B b;

    return 0;
}