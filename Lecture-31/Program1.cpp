/* This program implements the basic class for complex numbers and demonstrates + 
operator function */
#include<iostream>
using namespace std;

class Complex{
    private :
        double real;
        double imag;
    public:
        Complex()
        {
            cout<<"Parameterless Constructor called!"<<endl;
        }
        Complex(double r, double i)
        {
            cout<<"Parameterized Constructor called!"<<endl;
            real = r;
            imag = i;
        }
        Complex operator+(Complex & obj1);
        void display()
        {
            cout<<"Displaying parts of complex number.."<<endl;
            cout<<"Real Part : "<<real<<endl;
            cout<<"Imaginary Part : "<<imag<<endl;
        }
};

Complex Complex::operator+(Complex & obj1)
{
    cout<<"Operator + called..."<<endl;
    Complex temp;
    temp.real = real + obj1.real;
    temp.imag = imag + obj1.imag;
    return temp;
}

int main()
{
    Complex obj1(1,2);
    Complex obj2(2,3);

    Complex result;
    result = obj1 + obj2; //This will call the operator+ function to add obj1 and obj2 and store the result in result object
    result.display();

    return 0;
}