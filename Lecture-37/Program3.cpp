//Matrix class with overloaded stream insertion and extraction operator
#include <iostream>
using namespace std;

class Matrix{
    private:
        int row, col;
        int elements[10][10];
    public:
        Matrix(int r=0, int c=0){
            row=r;
            col=c;
            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    elements[i][j]=0;
                }
            }
        }
        friend istream& operator>>(istream& in, Matrix& m);  //overloaded extraction operator declaration
        friend ostream& operator<<(ostream& out, Matrix& m);  //overloaded insertion operator declaration
        ~Matrix()
        {}
};

istream& operator>>(istream& in, Matrix& m)
{
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<m.row; i++){
        for(int j=0; j<m.col; j++){
            cout<<"Element ["<<i+1<<"]["<<j+1<<"]: ";
            in>>m.elements[i][j];
        }
    }
    return in;  //returning the input stream object to allow chaining of input operations
}

ostream& operator<<(ostream& out, Matrix& m)
{
    out<<"The matrix is: "<<endl;
    for(int i=0; i<m.row; i++){
        out<<"| ";
        for(int j=0; j<m.col; j++){
            out<<m.elements[i][j]<<" ";
        }
        out<<" |"<<endl;
    }
    return out;  //returning the output stream object to allow chaining of output operations
}

int main()
{
    Matrix m(3,3);  //creating a 3x3 matrix object
    cin>>m;  //using the overloaded extraction operator to input the matrix elements
    cout<<m;  //using the overloaded insertion operator to display the matrix
    return 0;
}