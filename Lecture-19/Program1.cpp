/* Following program writes an integer, a floating-point value, and 
a character to a file called ‘test’ */
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("test.txt",ios::out);
    if(!myfile)
    {
        cout<<"Cannot open File!";
        return 0;
    }
    myfile<< 100 <<" "<< 12.58 <<" "<<"a";
    myfile.close();
    return 0;

}