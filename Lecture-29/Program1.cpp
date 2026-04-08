/*A sample program showing the use of friend function, 
which access the private data member of the class. */

#include<iostream>
using namespace std;

class Myclass{
    friend void increment(Myclass *,int); //friend function declaration, which can access the private members of Myclass
    private:
        int topSecret;  //private data member of Myclass
    public:
        void display(){
            cout<<"The value of top secret is "<<topSecret<<endl;  //display function to show the value of topSecret
        }
        Myclass();  //constructor declaration
};
Myclass::Myclass(){  //constructor definition, which initializes topSecret to 100
    topSecret=100;
}

void increment(Myclass *a, int i){  //friend function definition, which takes a pointer to Myclass and an integer increment value
    a->topSecret+=i;  //increment the value of topSecret by i using the pointer to Myclass
}

main()
{
    Myclass x;
    x.display();
    increment(&x, 10);
    x.display();
    return 0;
}