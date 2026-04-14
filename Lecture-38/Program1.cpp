//A small program which uses the user defined manipulators. 
#include<iostream>
using namespace std;

ostream& bell(ostream& output){
    return output<<"\a";
}
ostream& tab(ostream& output){
    return output<<"\t";
}
ostream& endline(ostream& output){
    return output<<"\n"<<flush;
}

int main()
{
    cout<<"DIAMOND"<<tab<<"LUXE"<<bell<<endline;

    return 0;
}
