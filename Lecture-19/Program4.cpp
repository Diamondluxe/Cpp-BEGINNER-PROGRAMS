/* This is a sample program to demonstrate the use of open(), close(), seekg(), get() 
functions and streams. It expects a file named MyFile.txt in the current directory having 
some data strings inside it. */
#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;
int main(){
    ifstream myfile;
    myfile.open("MyFile.txt");
    if (!myfile)
    {
        cout<<"Cannot open the File!";
        return 0;
    }
    char c;
    while(myfile.get(c))
    {
        cout<<c;
    }
    cout<<endl;
    myfile.clear(); // clear EOF flag
    myfile.seekg(11, ios::beg);   // move pointer to character index 11
    while (myfile.get(c))
    {
        cout<<c;
    }
    myfile.close();
    return 0;
}