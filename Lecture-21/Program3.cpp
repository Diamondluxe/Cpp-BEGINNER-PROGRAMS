//This program demonstrate the left and right shift 

#include<iostream>
using namespace std;
int main(){
    int num, result;
    cout<<"Please Enter a number: ";
    cin>>num;
    result= num<<1;
    cout<<"The number after left shift is "<<result<<endl;
    cout<<"The number after left shift again is "<<(result << 1)<<endl;
    cout<<"Now applying right shift."<<endl;
    result= num>>1;
    cout<<"Number after right shift is "<<result<<endl;
    cout<<"Number after right shift again is "<< (result>>1)<<endl;
    return 0;
}