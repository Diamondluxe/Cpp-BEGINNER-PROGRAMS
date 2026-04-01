/* This program implements the basic class for strings and demonstrates + operator 
function to concatenate two strings*/
#include<iostream>
#include<string.h>
using namespace std;

class String{
    private:
        char string[30];
    public:
        String()
        {
            strcpy(string, ""); //Initialize string to empty
        }
        void getString()
        {
            cout<<"Enter a string : ";
            cin.getline(string, 30); //Read a string from user input
        }
        void display(){
            cout<<"The string is : "<<string<<endl; //Display the string
        }
        String operator+(String & s);
};

String String::operator+(String & s)
{
    String temp;
    strcat(temp.string, string); //Concatenate the current string to temp
    strcat(temp.string," "); //Concatenate a space to temp
    strcat(temp.string, s.string); //Concatenate the string from object s to temp
    return temp; //Return the concatenated string as a new String object
}

int main()
{
    String s1, s2;
    s1.getString(); //Get the first string from user input
    s2.getString(); //Get the second string from user input
    String result;
    result = s1 + s2; //Concatenate s1 and s2 using the overloaded + operator and store the result in result
    result.display(); //Display the concatenated string
    return 0;
}