/*Program to illustrate the initialization lists, construction and destruction sequences of 
contained and containing objects*/
#include <iostream>
using namespace std;

class Column{
    int size;
    public:
        Column(int s)
        {
            cout<<"Column created.."<<endl;
            this->size=s;
        }
        ~Column()
        {
            cout<<"Column Destroyed.."<<endl;
        }
        void showsize();
        void setsize(int s);
};
void Column::showsize()
{
    cout<<"Column size is "<<size<<endl;
}
void Column::setsize(int s)
{
    this->size=s;
}

class Row{
    int size;
    Column C;
    public:
        Row(int rowsize,int colsize):C(colsize)
        {
            cout<<"Row created.."<<endl;
            this->size=rowsize;
        }
        ~Row()
        {
            cout<<"Row Destroyed!"<<endl;
        }
        void showsize();
        void setsize(int s);

};

void Row::showsize()
{
    C.showsize();
    cout<<"Row size is "<<size<<endl;
}
void Row::setsize(int s)
{
    this->size=s;
}

class Matrix{
    Row R;
    public:
        Matrix(int rowsize, int colsize):R(rowsize,colsize)
        {
            cout<<"Matrix created.."<<endl;
        }
        ~Matrix()
        {
            cout<<"Matrix Destroyed.."<<endl;
        }
        void showsize();
};

void Matrix::showsize()
{
    R.showsize();
}

void fun(){
    Matrix m(3,4);
    m.showsize();
}

int main()
{
    fun();

    return 0;
}