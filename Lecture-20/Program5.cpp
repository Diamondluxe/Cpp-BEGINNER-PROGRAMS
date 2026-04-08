/* this program reads from a file, populate the structure, and write the structure in a file */ 
#include<iostream>
#include<fstream>
using namespace std;

struct Student
{
    char name[25];
    char course[25];
    int age;
    float gpa;
};

void getdata(ifstream &in, Student s[], int size);
void writedata(ofstream &out, Student s[], int size);

int main(){
    ifstream infile("Sample.txt", ios::in);    //File open
    ofstream outfile("SampleOut.txt", ios::out);
    int const size=3;
    Student s[size];

    if(!infile || !outfile)  
    {
        cout<<"Error opening File!";
        return 0;
    }
    cout<<"File opened!"<<endl;

    getdata(infile, s, size);   //calling functions
    writedata(outfile, s, size);
    return 0;
}

void getdata(ifstream &in, Student s[], int size)  //Fuction to read data from file
{
    for(int i=0; i<3; i++){
        in>>s[i].name>>s[i].course>>s[i].age>>s[i].gpa;
    }
    cout<<"Data Read Successfully."<<endl;
}

void writedata(ofstream &out, Student s[], int size)  //Function to write data in new file
{
    out<<"Record of Students: "<<endl;
    for(int i=0; i<3; i++){
        out<<s[i].name<<" "<<s[i].course<<" "<<s[i].age<<" "<<s[i].gpa<<endl;
    }
    cout<<"Data written in new file Successfully.";
}