/*This program has a copy constructor and demonstrate the use of it. 
We create a new object by passing it an existing object, this calls 
the copy constructor and thus creates a complete copy of the passing 
object, and has its values in new location of memory. */
#include<iostream>
#include<string.h>
using namespace std;

class String{
    char* c;
    public:
        String();
        String(const char *s)
        {
            c = new char[25];
            strcpy(c,s);
        }
        
        void copy(char *s)
        {
            c=s;
        }
        int length()const
        {
            return strlen(c);
        }
        void print()
        {
            cout<<c;
        }
        String (const String&);
       
        ~String()
        {
            delete []c;
        }
};

String::String (const String& a)
        {
            int length;
            length= a.length();
            c= new char[length+1];
            strcpy(c,a.c);
        }

int main()
{
    String a("Diamomd");
    cout<<"\nThe string of a is ";
    a.print();

    String b(a);
    cout<<"\nThe string of b is ";
    b.print();

    a.copy("Welcome here!");
    cout<<"\nThe string of a is ";
    a.print();

    cout<<"\nThe string of b is ";
    b.print();

    return 0;
}