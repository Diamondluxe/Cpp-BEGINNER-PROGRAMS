/* Following program demonstrates the new operator. This program has the problem of 
memory leak because delete operator is not called for the allocated memory. */ 
#include<iostream>
using namespace std;

class MyDate{
    private:
        int day, month, year;
    public:
        MyDate(){
            cout<<"Parameterless constructor called!"<<endl;
            month = day = year = 0;
        }
        MyDate(int day, int month, int year){
            cout<<"Parameterized constructor called!"<<endl;
            this->day = day;
            this->month = month;
            this->year = year;
        }
        ~MyDate(){
            cout<<"Destructor called!"<<endl;
        }
        void setMonth(int month){
            this->month = month;
        }
        void setDay(int day){
            this->day = day;
        }
        void setYear(int year){
            this->year = year;
        }
        int getMonth(){
            return this->month;
        }
        int getDay(){
            return this->day;
        }
        int getYear(){
            return this->year;
        }
        void setDate(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }

};

int main(){
    MyDate *dptr;
    dptr= new MyDate[10]; //Created 10 objects of MyDate and assigned the pointer to the first object to dptr pointer variable

    //delete should have been called here before the program terminates.

    return 0;
}