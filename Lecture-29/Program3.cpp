/*The following program demonstrate the declaration and uses of friend functions of 
a class We set values in the constructors of the classes. The program prompts the user to 
enter a choice of addition, subtraction, multiplication or division. And then performs 
the appropriate operation by using the friend functions */

#include<iostream>
using namespace std;

class Myclass2;
class Myclass1{
    private:
        float value;
    public:
        Myclass1(){
            value=200;
        }
        
        friend float addboth(Myclass1, Myclass2);
        friend float subboth(Myclass1, Myclass2);
        friend float mulboth(Myclass1, Myclass2);
        friend float divboth(Myclass1, Myclass2);
};

class Myclass2{
    private:
        float value;
    public:
        Myclass2(){
            value=100;
        }
        
        friend float addboth(Myclass1, Myclass2);
        friend float subboth(Myclass1, Myclass2);
        friend float mulboth(Myclass1, Myclass2);
        friend float divboth(Myclass1, Myclass2);
};

int main(){
    Myclass1 a;
    Myclass2 b;
    char choice;
    cout<<"Please enter one of the operation +, -, *, / to perform"<<endl;
    cin>>choice;

    if(choice=='+'){
        cout<<"The sum is : "<<addboth(a,b)<<endl;
    }
    else if(choice=='-'){
        cout<<"The difference is : "<<subboth(a,b)<<endl;
    }
    else if(choice=='*'){
        cout<<"The product is : "<<mulboth(a,b)<<endl;
    }
    else if(choice=='/'){
        cout<<"The quotient is : "<<divboth(a,b)<<endl  ;
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
    return 0;
}

float addboth(Myclass1 a, Myclass2 b){
    return (a.value + b.value);
}
float subboth(Myclass1 a, Myclass2 b){
    return (a.value - b.value);
}
float mulboth(Myclass1 a, Myclass2 b){
    return (a.value * b.value);
}
float divboth(Myclass1 a, Myclass2 b){
    if(b.value!=0){
        return (a.value / b.value);
    }
    else{
        cout<<"Division by zero is not allowed"<<endl;
        return 0;
    }
}