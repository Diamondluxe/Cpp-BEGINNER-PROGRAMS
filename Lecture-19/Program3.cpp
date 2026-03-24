/* Code snippet to copy the file ‘thisFile’ to the file ‘thatFile’ */ 
#include<iostream>
#include<fstream>

using namespace std;
int main(){
    string line;
    ifstream infile("thisFile.txt");
    ofstream outfile("thatFile.txt");
    if(!infile || !outfile)
    {
        cout<<"Cannot open file!";
        return 0;
    }
    while(getline(infile,line))
    {
        outfile<<line<<endl;
    }
    cout<<"Done!";
    infile.close();
    outfile.close();
    return 0;
}