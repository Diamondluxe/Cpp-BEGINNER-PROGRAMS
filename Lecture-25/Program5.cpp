/* The following example replaces strcpy and strncpy with the single function name copy*/
#include <iostream>
#include <string.h>
using namespace std;

void copy(char *dest, const char *scr)
{
    strcpy(dest, scr);  //copy the string from scr to dest using strcpy
}
void copy(char *dest, const char *scr, int n)
{
    strncpy(dest, scr, n);  //copy the first n characters from scr to dest using strncpy
}

static char stra[20], strb[20];  //declare two character arrays to hold the copied strings, they are declared as static to ensure that they are initialized to zero and have a lifetime that extends across the entire program execution

int main()
{
    copy(stra, "That");
    copy(strb, "This is a string", 4); 
    cout<<stra<<" and "<<strb<<endl;  //output the copied strings
}
