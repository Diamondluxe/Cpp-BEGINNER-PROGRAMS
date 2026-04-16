//Declaration of the Matrix class. This class is containing the double type elements

#include<iostream>
using namespace std;

class Matrix
{
   private:
        int rows, cols;
        double** elemnts;
    public:
        Matrix(int r=0, int c=0);
        Matrix(const Matrix& m);  //copy constructor
        ~Matrix();

        Matrix transpose()const;

        friend istream& operator>> (istream& in,const Matrix& m);
        friend ostream& operator<< (ostream& out, const Matrix& m);
};

//Complete program in lecture 44