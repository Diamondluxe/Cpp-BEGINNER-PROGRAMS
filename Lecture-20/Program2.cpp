/* This program shows the access of structure data members with pointer to structure */
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
    Student *sptr;
    sptr=&s1;
    cout << "Displaying the structure data members using pointers" << endl; 
    cout << "Using the * operator" << endl;
    cout<<"The name is "<<(*sptr).name<<endl;
    cout<<"The course is "<<(*sptr).course<<endl;
    cout<<"The age is "<<(*sptr).age<<endl;
    cout<<"The year is "<<(*sptr).year<<endl<<endl; 

    cout << "Using the -> operator" << endl;
    cout<<"The name is "<<sptr->name<<endl;
    cout<<"The course is "<<sptr->course<<endl;
    cout<<"The age is "<<sptr->age<<endl;
    cout<<"The year is "<<sptr->year<<endl;
    return 0;
}