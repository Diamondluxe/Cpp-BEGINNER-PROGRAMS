///This program illustrates the initializer list, order of execution of constructor’s inside the list.

#include<iostream>
#include<string.h>
using namespace std;

class Date{
    int day,month,year;
    public:
        Date();
        Date(int,int,int);
        ~Date();
};
Date::Date()
{
    cout<<"Date--Default constructor called.."<<endl;
}
Date::Date(int d, int m, int y)
{
    cout<<"Date--Constructore with day: "<<d<<", month: "<<m<<", and year: "<<y<<" called.."<<endl;
    this->day=d;
    this->month=m;
    this->year=y;
}
Date::~Date()
{
    cout<<"Date--Destrunctor called.."<<endl;
}

class Info{
    private:
        char name[20];
        char address[40];
        Date Dob;
        Date licensedate;
    public:
        Info();
        Info(char* n,char* add, int dob, int mob, int yob, int ld, int lm,int ly);
        ~Info();

};

Info::Info()
{
    cout<<"Info--Default constructor called.."<<endl;
}
Info::Info(char* n, char* add, int dob, int mob, int yob, int ld, int lm , int ly):Dob(dob,mob,yob),licensedate(ld,lm,ly)
{
    cout<<"Info--Parameterized constructor called.."<<endl;
    strncpy(name,n,20);
    strncpy(address, add,40);
}
Info::~Info()
{
    cout<<"Info--Destructor called.."<<endl;
}

int main(){
    Info A("DiamondLuxe", "House no 15 Street 4 Moon", 15, 3, 2008, 20, 4, 2026);

    return 0;
}