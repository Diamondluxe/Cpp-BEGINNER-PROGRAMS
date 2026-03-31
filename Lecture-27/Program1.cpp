/*A sample program with the Date class. Use of constructors and destructor is shown 
here. A message is displayed to show which one constructor is called */

//A sample program with the Date class. Use of constructors is shown here. 

#include <iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date();  //default constructor declaration
        Date(int d, int m);  //parameterized constructor declaration with default value for year
        Date(int d, int m, int y);  //parameterized constructor declaration
        void displayDate();
        void setDay(int i);
        void setMonth(int i);
        void setYear(int i);
        int getDay();
        int getMonth();
        int getYear();
        ~Date();  //destructor declaration
};

Date::Date(){  //default constructor definition
    day=1;
    month=1;
    year=1999;
    cout<<"Default constructor called!"<<endl;
}
Date::Date(int d, int m){  //parameterized constructor definition with default value for year
    day=d;
    month=m;
    year=2002;  //default value for year
    cout<<"Parameterized constructor with two values called!"<<endl;
}
Date::Date(int d, int m, int y){  //parameterized constructor definition
    day=d;
    month=m;
    year=y;
    cout<<"Parameterized constructor with three values called!"<<endl;
}
Date::~Date(){
    cout<<"Destructor called"<<endl;
}
void Date::displayDate(){
    cout<<"Date: "<< getDay() <<"-"<<getMonth() <<"-"<<getYear()<<endl;
}
void Date::setDay(int i){
    day=i;
}
void Date::setMonth(int i){
    month=i;
}
void Date::setYear(int i){
    year=i;
}
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}
int Date::getYear(){
    return year;
}

int main()
{
    Date d1, d2(15,3), d3(10,5,2020);  //objects created using different constructors

    d1.displayDate();
    d2.displayDate();
    d3.displayDate();

    return 0;
}

