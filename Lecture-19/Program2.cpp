/* Following program reads an integer, a float and a character from 
the file created by the preceding program. */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream myfile;
    myfile.open("test.txt", ios::in);
    if (!myfile)
    {
        cout<<"Cannot open file!";
        return 0;
    }
    
    int integer;
    float flo;
    char character;
    myfile>>integer>>flo>>character;
    cout<<integer<<" "<<flo<<" "<<character;
    myfile.close();
    return 0;
    
}