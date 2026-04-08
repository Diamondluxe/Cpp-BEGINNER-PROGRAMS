//Matrix class, which is without overloading stream operators
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
        void getMatrix();
        void displayMatrix();
        ~Matrix()
        {}
};

void Matrix::getMatrix(){
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Element ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>elements[i][j];
        }
    }
}

void Matrix::displayMatrix(){
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<row; i++){
        cout<<"| ";
        for(int j=0; j<col; j++){
            cout<<elements[i][j]<<" ";
        }
        cout<<" |"<<endl;
    }
}

int main()
{
    Matrix m(2,3);  //creating a 2x3 matrix object
    m.getMatrix();  //inputting the elements of the matrix
    m.displayMatrix();  //displaying the matrix
    return 0;
}
