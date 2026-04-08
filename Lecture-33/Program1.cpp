/*This program defines the assignment operator. We copy the string of one object 
into the string of other object using different spaces for both strings in the memory.*/
#include<iostream>
#include<string.h>
using namespace std;

class String{
    private:
        char *buf;
    public:
        String();
        String(const char *str){
            buf = new char[30]; //Allocate memory for the string plus null terminator
            strcpy(buf, str); //Copy the input string into the buffer
        }
        void display()
        {
            cout<<buf<<endl;
        }
        int length(){
            return strlen(buf); //Return the length of the string stored in the buffer
        }
        void operator=(String &obj); //Overloading the assignment operator

};


void String::operator=(String &obj){ //Definition of the assignment operator
   int length;
   length=obj.length(); //Get the length of the string in the object being assigned from
   buf = new char[length+1]; //Allocate memory for the new string plus null termin
   strcpy(buf, obj.buf); //Copy the string from the object being assigned from into the buffer of the current object
}

int main(){
    String mystring("Here is my string!"); //Create a String object with an initial string
    cout<<"My string is : ";
    mystring.display(); //Display the string of the first object
    cout<<endl;

    String yourstring("Here is your string!"); //Create another String object with a different initial string
    cout<<"Your string is : ";
    yourstring.display(); //Display the string of the second object
    cout<<endl;

    yourstring = mystring; //Use the overloaded assignment operator to copy the string from yourstring to mystring
    cout<<"After assignment, your string is : ";
    yourstring.display(); //Display the string of the second object after assignment

    return 0;
}