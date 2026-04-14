/*A small program showing the use of user defined manipulators. 
The display function of matrix is using these manipulators to 
format the display. */
#include<iostream>
#include<iomanip>
using namespace std;

class Matrix{
    private:
        int rows;
        int cols;
        int element[3][3];
    public:
        Matrix(int row=0, int col=0)
        {
            rows = row;
            cols = col;
        }

        friend istream& operator >> (istream& in, Matrix& m);
        friend ostream& operator << (ostream& out, Matrix& m);
        friend ostream& spacefirst (ostream& out);
        friend ostream& spacebw (ostream& out);
        friend ostream& line (ostream& out);
        friend ostream& newline (ostream& out);
        friend ostream& star (ostream& out);

        ~Matrix() {}
};

ostream& spacefirst (ostream& out)
{
    out<<setw(25);
    return out;
}
ostream& spacebw (ostream& out)
{
    out<<" ";
    return out;
}
ostream& line (ostream& out)
{
    out<<"|";
    return out;
}
ostream& newline (ostream& out)
{
    out<<endl;
    return out;
}
ostream& star (ostream& out)
{
    out<<"*";
    return out;
}

istream& operator >> (istream& in, Matrix& m)
{
    for(int i=0; i<m.rows; i++)
    {
        for(int j=0; j<m.cols; j++)
        {
            cout<<"Element for ("<<i<<","<<j<<") : ";
            in>>m.element[i][j];
        }
    }
    return in;
}
ostream& operator << (ostream& out, Matrix& m)
{
    for(int a=0;a<50;a++)
    {
        if(a==25)
        {
            out<<"Displaying Matrix";
        }
        else{
            out<<star;
        }
    }

    out<<newline;

    for(int i=0; i<m.rows;i++)
    {
        out<<spacefirst<<line;
        for(int j=0;j<m.cols; j++)
        {
            out<<spacebw<<m.element[i][j]<<spacebw;
        }
        out<<line<<newline;
    }
    return out;
}


int main()
{
    Matrix M(3,3);
    cin>>M;
    cout<<M;

    return 0;
}
