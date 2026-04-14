//An example of static objects, notice the sequence of their creation and destruction
#include<iostream>
using namespace std;

class truck{
    private:
        char name;
    public:
        truck(char cc)
        {
            name = cc;
            cout<<"Inside constructor of "<<name<<endl;
        }
        ~truck()
        {
            cout<<"Inside destructor of "<<name<<endl;
        }
};

truck A('A'); //gloabal object

void b(){  //simple function creating object
    truck B('B');
}
void c(){  //simple function creating object
    truck C('C');
}

int main()
{
    truck D('D');

    b();
    c();

    return 0;
}