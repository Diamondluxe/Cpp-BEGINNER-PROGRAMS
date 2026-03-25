//This program determines whether the fourth bit of a number entered by user is set or not 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Please Enter a number: ";
    cin>>num;
    if(num & 0x8) //8 is written in hexadecimal form
    cout<<"The fourth bit of number is set.";
    else
    cout<<"The fourth bit of number is not set.";
    
    return 0;
}