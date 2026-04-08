// A program with default arguments in a function prototype 
#include <iostream>
using namespace std;

void show(int=1, float=3.5, long=4);
int main(){
    show();  //call the function without any arguments, so default values will be used
    show(5);  //call the function with one argument, so the first default value will be overridden
    show(9, 6.7);  //call the function with two arguments, so the first two default values will be overridden
    show(2, 4.5, 8L);  //call the function with three arguments, so all default values will be overridden
    return 0;
}

void show(int a, float b, long c){
    cout<<"Integer: "<<a<<", Float: "<<b<<", Long: "<<c<<endl;
}