/* A sample program with the Date class. Set methods are given to set the day, month 
and year.The date is also diplayed on the screen using member function. */

#include <iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        void setDay(int i);
        void setMonth(int i);
        void setYear(int i);
        void displayDate();
};

void Date::setDay(int i){
    day=i;
}
void Date::setMonth(int i){
    month=i;
}
void Date::setYear(int i){
    year=i;
}
void Date::displayDate(){
    cout<<"Date: "<<day<<"-"<<month<<"-"<<year<<endl;
}

int main(){
    Date d1,d2;
    d1.setDay(1);
    d1.setMonth(1);
    d1.setYear(2000);
    d1.displayDate();

    d2.setDay(15);
    d2.setMonth(3);
    d2.setYear(2026);
    d2.displayDate();
    return 0;
}