/* A sample program showing the use of friend function, 
which access the private data members of two classes.*/
#include<iostream>
using namespace std;

class Myclass2;  //forward declaration of Myclass2

class Myclass1{
    private:
        int topSecret;  //private data member of Myclass1
    public:
        void display(){
            cout<<"The value of top secret is "<<topSecret<<endl;  //display function to show the value of topSecret    
        }
        Myclass1();  //constructor declaration
        friend void addboth(Myclass1, Myclass2); //friend function declaration, which can access the private members of Myclass1 and Myclass2   

};

Myclass1::Myclass1(){  //constructor definition, which initializes topSecret to 100
    topSecret=100;
}

class Myclass2{
    private:
        int topSecret;  //private data member of Myclass2
    public:
        void display(){
            cout<<"The value of top secret is "<<topSecret<<endl;  //display function to show the value of topSecret    
        }   
        Myclass2();  //constructor declaration
        friend void addboth(Myclass1, Myclass2); //friend function declaration, which can access the private members of Myclass1 and Myclass2
};

Myclass2::Myclass2(){  //constructor definition, which initializes topSecret to 200
    topSecret=200;
}

void addboth(Myclass1 a, Myclass2 b){  //friend function definition, which takes two objects of Myclass1 and Myclass2
    cout<<"The value of top secret in Myclass1 is "<<a.topSecret<<endl;  //access the private member of Myclass1 using the object a
    cout<<"The value of top secret in Myclass2 is "<<b.topSecret<<endl;  //access the private member of Myclass2 using the object b
    cout<<"The sum of both top secrets is "<<a.topSecret+b.topSecret<<endl;  //display the sum of both top secrets
}

int main(){
    Myclass1 a;
    Myclass2 b;
    a.display();
    b.display();
    addboth(a,b);  //call the friend function to display the values of top secrets and their sum
    return 0;
}