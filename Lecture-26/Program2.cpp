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
        Date(int d, int m, int y);  //parameterized constructor declaration
        void displayDate();
        void setDay(int i);
        void setMonth(int i);
        void setYear(int i);
        int getDay();
        int getMonth();
        int getYear();
};

Date::Date(){  //default constructor definition
    day=1;
    month=1;
    year=1999;
}
Date::Date(int d, int m, int y=2002){  //parameterized constructor definition
    day=d;
    month=m;
    year=y;
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
    Date d1;  //object created using default constructor
    Date d2(15,3);  //object created using parameterized constructor with default value for year
    Date d3(10,5,2020);  //object created using parameterized constructor with all values provided

    d1.displayDate();
    d2.displayDate();
    d3.displayDate();

    return 0;
}

