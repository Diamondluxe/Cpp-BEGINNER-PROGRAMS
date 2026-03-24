/* This sample code demostrates the use of fstream and seekg(), seekp(), tellg(), tellp() function. It will create a 
file named NewFile.txt write alphabets into it*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char c;
    fstream myfile;
    myfile.open("NewFile.txt", ios::in | ios::out | ios::trunc);
    if(!myfile)
    {
        cout<<"File cannot open!";
        return 0;
    }
    myfile<<"ALPHABETS :";
    for( c='A';c<='Z';c++)
    {
        myfile<<c<<" ";
    }
    cout<<endl<<"Tellp Position: "<<myfile.tellp()<<endl;
    myfile.seekp(0,ios::beg);
    cout<<"Postion of Tellg now: "<<myfile.tellg()<<endl;
    myfile.seekg(19,ios::beg);
    myfile>>c;
    cout<<"C is now: "<<c<<endl;
    return 0;
} 
