// Reference parameters for reducing overhead 
// and eliminating pointer notation

#include<iostream>
using namespace std;

struct Bigone{
    int num;
    char text[1000]; //A lot of chars
} a={123, "This is a BIG structure!"};

void value(Bigone b){  //Pass by value
    cout<<b.num<<endl;
    cout<<b.text<<endl;
}
void pointer(Bigone *b){  //Pass by pointer
    cout<<b->num<<endl;
    cout<<b->text<<endl;
}
void reference(Bigone &b){  //Pass by reference
    cout<<b.num<<endl;
    cout<<b.text<<endl;
}

int main(){
    value(a); //passing by variable itself
    pointer(&a); //passing by address of the variable
    reference(a); //passing by refrence of the variable

    return 0;
}