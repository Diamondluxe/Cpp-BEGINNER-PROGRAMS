/*Besides passing parameters to a function, references can also be used to return 
values from a function */ 
#include<iostream>
using namespace std;

int num =0; //Gloabal variable num initialized to 0
int& numRef() //numRef is a reference to num
{
    return num; //returning the reference to num
}

int main(){
    int i;
    i= numRef(); //i is assigned the value of num through the reference returned by numRef
    cout<<"The value of i is "<<i<<endl; //display the value of i
    cout<<"The value of num is "<<num<<endl; //display the value of num
    numRef()=200; //assigning a new value to num through the reference returned by numRef
    cout<<"The value of num after modification is "<<num<<endl; //display the modified value of num
    return 0;
}