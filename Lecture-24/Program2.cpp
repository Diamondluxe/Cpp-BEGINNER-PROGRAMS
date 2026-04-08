//This program allocates memory dynamically and then frees it after use. 
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char s1[]={"DiamondLuxe welcomes you!"};
    char *s2;
   
    s2=(char*) malloc(strlen(s1)+1);  //allocate memory for s2 based on the length of s1
   
    if(s2==NULL){  //check if memory allocation was successful
        cout<<"Memory allocation failed!"<<endl;
        return 1;  //exit with error code
    }   
   
    strcpy(s2,s1);  //copy the string from s1 to s2
   
    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
   
    free(s2);  //deallocate the memory allocated for s2
   
    return 0;
}