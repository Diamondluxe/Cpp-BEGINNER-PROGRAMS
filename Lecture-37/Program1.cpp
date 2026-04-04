/*Date class containg overloaded insertion and extraction operators*/
#include <iostream>
using namespace std;

class Date{
    private:
        int month, day, year;
    public:
        Date(){
            cout<<"Prameterless contructor called!"<<endl;
            month = day = year = 0;
        }
        ~Date(){
            cout<<"Destructor called!"<<endl;
        }
        friend istream& operator>>(istream& in, Date& d);  //overloaded extraction operator declaration
        friend ostream& operator<<(ostream& out, Date& d);  //overloaded
};

istream& operator>>(istream& in, Date& d)
{
    cout<<"Enter month: ";
    in>>d.month;
    cout<<"Enter day: ";
    in>>d.day;
    cout<<"Enter year: ";
    in>>d.year;
    return in;  //returning the input stream object to allow chaining of input operations
}

ostream& operator<<(ostream& out, Date& d)
{
    out<<d.month<<"-"<<d.day<<"-"<<d.year;  //formatting the output as month/day/year
    return out;  //returning the output stream object to allow chaining of output operations
}

int main()
{
    Date d1,d2;
    cout<<"Enter date 1: "<<endl;
    cin>>d1;  //using the overloaded extraction operator to input date 1
    cout<<"Enter date 2: "<<endl;
    cin>>d2;  //using the overloaded extraction operator to input date 2
    cout<<"Date 1: "<<d1<<endl;  //using the overloaded insertion operator to output date 1
    cout<<"Date 2: "<<d2<<endl;  //using the overloaded insertion operator to output date 2
    return 0;
}