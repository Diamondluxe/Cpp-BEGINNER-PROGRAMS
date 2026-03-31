/* Overload functions to print variables of different types */ 
#include <iostream>
using namespace std;

void print(int a){
    cout<<"Integer: "<<a<<endl;
}
void print(float b){
    cout<<"Float: "<<b<<endl;
}
void print(char *s){
    cout<<"String: "<<s<<endl;
}

int main()
{
    int a=10;
    float b=3.14;
    char s[]="Diamond Luxe welcomes you!";
    
    print(a);
    print(b);
    print(s);
    
    return 0;
}