/* This program defines a class Fraction which stores numerator and 
denominator of a fractional number separately. It also overloads the 
addition operator for adding the fractional numbers so that exact results 
can be obtained. */

#include<iostream>
using namespace std;

class Fraction{
    private:
        long num;
        long den;
    public:
        Fraction(int n=0, int d=1){ //Constructor to initialize numerator and denominator
            num = n;
            den = d;
        }
        void display(){
            cout<<num<<"/"<<den<<endl; //Display the fraction in numerator/denominator format
        }
        Fraction operator+(Fraction &obj){ //Overloading the addition operator
            Fraction temp; //Create a temporary Fraction object to hold the result of addition
            temp.num = (num * obj.den) + (obj.num * den); //Calculate the numerator of the result using cross multiplication
            temp.den = den * obj.den; //Calculate the denominator of the result by multiplying the denominators
            return temp; //Return the resulting Fraction object
        }
};

int main()
{
    Fraction f1(1, 2); //Create a Fraction object representing 1/2
    Fraction f2(3, 4); //Create another Fraction object representing 3/4
    cout<<"First fraction is : ";
    f1.display(); //Display the first fraction
    cout<<"Second fraction is : ";
    f2.display(); //Display the second fraction

    Fraction result = f1 + f2; //Use the overloaded addition operator to add f1 and f2, and store the result in a new Fraction object
    cout<<"The sum of the two fractions is : ";
    result.display(); //Display the resulting fraction after addition

    return 0;
}