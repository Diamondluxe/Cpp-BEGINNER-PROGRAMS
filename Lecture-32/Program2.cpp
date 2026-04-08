//Greater of two numbers using function overloading > operator
#include<iostream>
using namespace std;

class Hello{
    private:
        int num;
    public:
        void getData(){
            cout<<"Enter a number : ";
            cin>>num;
        }
        void display(){
            cout<<"The number is "<<num<<endl;
        }
        bool operator>(Hello &obj){
           if(num>obj.num) return true;
           else return false;
        }
        int getNum(){
            return num;
        }
};

int main()
{
    Hello obj1, obj2;
    obj1.getData(); //Get the first number from user input
    obj2.getData(); //Get the second number from user input
    if(obj1 > obj2){ //Use the overloaded > operator to compare obj1 and obj2
        cout<<"The greater number is : "<<obj1.getNum()<<endl; //If obj1 is greater, display its num
    }
    else if(obj2 > obj1){ //Use the overloaded > operator to compare obj2 and obj1
        cout<<"The greater number is : "<<obj2.getNum()<<endl; //If obj2 is greater, display its num
    }
    else{
        cout<<"Both numbers are equal!"<<endl; //If both numbers are equal, display a message
    }
}