//A program which shows string manipulation using <string.h> library
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[]="Welcome to ";
    char s2[]="DiamondLuxe's C++ class!";
    char s3[]="Welcome to KARACHI";
    char city[]="KARACHI";
    char province[]="SINDH";
    char s[50];

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    
    cout << "Length of s1: " << strlen(s1) << endl;
    cout << "Length of s2: " << strlen(s2) << endl;
    cout << "Length of s3: " << strlen(s3) << endl;

    strcpy(s, "HYDERABAD");
    cout << "The nearest city to " << city << " is " << s << endl;

    strcat(s, " and " );
    strcat(s, city);
    strcat(s, " are in ");
    strcat(s, province);
    cout << s << endl;

    if(!strcmp(s1,s2))
    {
        cout << "s1 and s2 are identical." << endl;
    }
    else
    {
        cout << "s1 and s2 are not identical." << endl;
    }

    if(!strncmp(s1,s3,11))
    {
        cout << "The first 11 characters of s1 and s3 are identical." << endl;
    }
    else
    {
        cout << "The first 11 characters of s1 and s3 are not identical." << endl;
    }

    return 0;

}