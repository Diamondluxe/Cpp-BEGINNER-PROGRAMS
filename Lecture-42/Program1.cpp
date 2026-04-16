/* This program defines a template class and shows its use for different data types. 
There is also the use of template function. It also overloads the << operator.*/
#include<iostream>
using namespace std;

class Hen;

template<class A>

class Cat
{
    private:
        A weight;
    public:
        Cat(A w);
        void print();

};

template<class A>
Cat<A>::Cat(A w)
{
    this->weight=w;
}

template<class A>
void Cat<A>::print()
{
    cout<<"Printing weight: "<<weight<<endl;
} 



class Hen
{
    private:
        int wei;
    public:
        Hen(int w=0);
        friend ostream& operator << (ostream& out,const Hen& E)
        {
            out<<E.wei<<" (from Hen class)"<<endl;
            return out;
        }

};

Hen::Hen(int w)
{
    this->wei=w;
}



int main()
{
    Cat<int> smallone(5);
    Cat<double> Largeone(8.6);

    Hen hen(3);
    Cat<Hen> Chick(hen);

    smallone.print();
    Largeone.print();
    Chick.print();

    return 0;

}