//unary operator for class
#include<iostream>
using namespace std;

class Myclass{
    private:
        int value;
    public:
        Myclass(){
            value=7;
        }
        void display(){
            cout<<"The value is "<<value<<endl;
        }
        Myclass operator++(); //Overloading the prefix increment operator
        Myclass operator--(int); //Overloading the postfix increment operator
};

Myclass Myclass::operator++(){ //Definition of prefix increment operator
    value++; //Increment the value by 1
    return *this; //Return the current object after incrementing
}
Myclass Myclass::operator--(int){ //Definition of postfix decrement operator
    Myclass temp = *this; //Create a temporary object to hold the current state of the object before decrementing
    value--; //Decrement the value by 1
    return temp; //Return the temporary object which holds the state before decrementing
}

int main()
{
    Myclass obj;
    obj.display();
    ++obj;
    obj.display();
    obj--;
    obj.display();

    return 0;
}