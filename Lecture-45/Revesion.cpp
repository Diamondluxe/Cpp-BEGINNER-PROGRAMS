//Revesion cheatsheet covering class and templates topics

#include<iostream>
using namespace std;

int main()
{
   
    cout << "\n\n    WELCOME TO DIAMOND LUXE ^-^  " <<endl;
    cout<<"  A pretty cheat sheat for you!  "<< endl;

    cout<<"\n-----CLASS AND OBJECT-----"<<endl;
    cout<<"Class:   class classname{...};"<<endl;
    cout<<"Object:  classname object;"<<endl;
    cout<<"Mode:    private, public, protected "<<endl;

    cout<<"\n-----OPERATOR OVERLOADING (MEMBER)----"<<endl;
    cout<<"Assignment:  void operator=(const classname &object)" << endl;
    cout<<"Addition:    classname operator+(const classname &object)" << endl;
    cout<<"Pre-incre:   classname& operator++()" << endl;
    cout<<"Sub/Mult:    classname operator-(object), classname operator*(object)" << endl;

    cout<<"\n-----FRIEND OPERATORS (INSERTION/EXTRACTION)------"<<endl;
    cout << "Output (<<): friend ostream& operator<<(ostream& out, const classname& object)" << endl;
    cout << "Input  (>>): friend istream& operator>>(istream& in, classname& object)" << endl;
    cout << "Rule: Must return the stream (out/in) to allow chaining!" << endl;

    cout<<"\n-----DYNAMIC MEMORY-----"<<endl;
    cout << "New :          int* p = new int;    // Calls constructor" << endl;
    cout << "Delete :       delete p;            // Calls destructor" << endl;
    cout << "Array Delete:  delete[] p;          // For arrays" << endl;

    cout<<"\n-----TEMPLATES & OBJECTS-----"<<endl;
    cout << "Syntax: template <class T>" << endl;
    cout << "Object: ClassName<int> obj; // Must specify type in <>" << endl;

    cout << "\nOne more cheatsheet is in lecture 22..Enjoyy!!"<<endl;
    cout << "\nGood luck with your study session!\n"<<endl;
    
}

