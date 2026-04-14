//This is a simple program. This shows the use of static variables inside a function.
#include<iostream>
using namespace std;

void staticfunc();
void unstaticfunc();

int main()
{
    int i;

    cout<<"Calling static function."<<endl;
    for(i=0;i<10;i++)
    {
        staticfunc();
    }
    cout<<endl<<endl;

    cout<<"Calling nonstatic function."<<endl;
    for (i=0;i<10;i++)
    {
        unstaticfunc();
    }

    return 0;
}

void staticfunc()
{
    static int i=1;
    cout<<"The value of i is "<<i<<endl;
    i++;
}

void unstaticfunc()
{
    int i=1;
    cout<<"The value of i is "<<i<<endl;
    i++;
}