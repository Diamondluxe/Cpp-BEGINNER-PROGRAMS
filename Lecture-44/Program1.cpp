// A program that creates a Matrix class with dynamic memory, a copy constructor for 
//deep copying, and a function to find the transpose of the matrix.

#include<iostream>
using namespace std;

class Matrix
{
   private:
        int rows, cols;
        double** elements;
    public:
        Matrix(int r=0, int c=0);
        Matrix(const Matrix& m);  //copy constructor
        ~Matrix();

        Matrix transpose()const;

        friend istream& operator>> (istream& in, Matrix& m);
        friend ostream& operator<< (ostream& out, const Matrix& m);
};

Matrix::Matrix(int r,int c)
{
    this->rows=r;
    this->cols=c;
    if(r>0 && c>0)
    {
        elements = new double* [rows];
        for(int i=0; i<rows; i++)
        {
            elements[i]=new double [cols];
        }
    }
    else
        elements= nullptr;
}

Matrix::Matrix(const Matrix& m)
{
    this->rows=m.rows;
    this->cols=m.cols;

     this->elements = new double* [rows];
        for(int i=0; i<rows; i++)
        {
            elements[i]=new double [cols];
        }
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            this->elements[i][j]=m.elements[i][j];
    }
}

Matrix::~Matrix()
{
    if(elements!=nullptr)
    {
        for (int i = 0; i < rows; i++) 
        {
             delete[] elements[i];
        }
         delete[] elements;
        
    }
}

Matrix Matrix::transpose()const
{
    Matrix temp(cols,rows);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            temp.elements[i][j]=this->elements[j][i];
        }
    }
    return temp;
}

istream& operator>> (istream& in, Matrix& m)
{
    for(int i=0;i<m.rows;i++)
    {
        for(int j=0;j<m.cols;j++)
        {
            cout<<"Enter element for ("<<i<<","<<j<<"): ";
            in>>m.elements[i][j];
        }
    }
    return in;

}

ostream& operator<< (ostream& out, const Matrix& m)
{
    for(int i=0;i<m.rows;i++)
    {
        out<<"|";
        for(int j=0;j<m.cols;j++)
        {
            out<<" "<<m.elements[i][j];
        }
        out<<" |"<<endl;
    }
    return out;

}

int main()
{
    int r,c;

    cout<<"--Matrix Luxe--"<<endl;
    cout<<"Enter no of rows: ";
    cin>>r;
    cout<<"Enter no of columns: ";
    cin>>c;

    Matrix A(r,c);
    cin>>A;

    cout<<"\nOriginal Matrix: "<<endl;
    cout<<A;

    Matrix T = A.transpose();
    cout<<"\nTransposed Matrix: "<<endl;
    cout<<T;

    return 0;
}


