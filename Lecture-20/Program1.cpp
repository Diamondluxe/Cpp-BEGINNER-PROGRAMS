/* Simple program showing the initialization of structure.*/
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

    cout << "Displaying the structure data members" << endl; 
    cout<<"The name is "<<s1.name<<endl;
    cout<<"The course is "<<s1.course<<endl;
    cout<<"The age is "<<s1.age<<endl;
    cout<<"The year is "<<s1.year<<endl;
    return 0;
}
    