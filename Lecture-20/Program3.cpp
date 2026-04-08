/* this program shows the memory size of a structure*/ 
#include<iostream>
using namespace std;
struct Student
    {
        char name[20];
        char course[30];
        int age;
        int year;
    };
int main(){
    Student s1={"Diamond Luxe","Software Engineer",18,2026};
    cout<<"The Structure s1 occupies "<<sizeof(s1)<<" bytes in the memory";
    return 0;
}