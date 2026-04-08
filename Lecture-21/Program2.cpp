//This program demonstrate the encryption by using ^ operator 
#include<iostream>
using namespace std;
int main(){
    char password[50];
    char *passptr;

    cout<<"Enter the password: ";
    cin >> password;

    passptr=password;

    // encrypting the password by using ^ with 3 
    while(*passptr != '\0'){
        *passptr = (*passptr^3);
        ++passptr;
    }

    cout<<"The Encrypted password is: "<<password<<endl;

    passptr=password;
     // decrypting the password by using ^ with 3 
    while(*passptr != '\0'){
        *passptr = (*passptr^3);
        ++passptr;
    }

    cout<<"The Decrypted password is: "<<password<<endl;
    return 0;
}