//Program to display the operation of the strcat() and strncat()
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[]="DiamondLuxe ";
    char s2[]="Welcomes you!";
    char s3[20];
    cout<< "s1: " << s1 << endl;
    cout<< "s2: " << s2 << endl;
    cout<< "s3: " << s3 << endl;
    cout<< "strcat(s1, s2) = " << strcat(s1, s2) << endl;
    cout<< "strncat(s3, s2, 8) = " << strncat(s3, s2, 8) << endl;
    return 0;
}