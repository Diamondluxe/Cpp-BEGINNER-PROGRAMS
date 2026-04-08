// Variable declaration placement 
#include <iostream>
using namespace std;

int main(){
    int num;
    for(int num=1; num<3; num++)  //num is declared in the for loop scope, so it is only accessible within the for loop
    {
        int temp=22;
        cout<<"This is line number "<<num<<" and temp is "<<temp<<endl;
    }

    if(num==3)  //num is still accessible here because it was declared in the main function scope, not inside the for loop but this num is different from the num declared in the for loop, they are two different variables with the same name but different scopes
    {
        int temp=33;
        cout<<"This is line number "<<num<<" and temp is "<<temp<<endl;     //temp is declared in the if block scope, so it is only accessible within the if block
    }
    return 0;

}