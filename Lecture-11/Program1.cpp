// This program reads the input from user and store it into an array and stop at -1. 
#include <iostream>
using namespace std;
int main()
{
    int c[100];  //declare an array of size 100 to store the input from user
    int i=0, z;
   
    do{
        cout<<"Enter a number : ";  //prompt user to enter a number
        cin>>z;
       
        if(z!=-1)  //if the input is not -1, then store it in the array c at index i
        {
            c[i]=z;
        }
       
        i++;  //increment i to store the next input in the next index of the array c
  
    } while(z!=-1 && i<100); //the loop continues until the user enters -1 or the array c is full (i<100)

    cout<<"The total number of positive integers entered by user is : "<<i-1<<endl; //i-1 because the last input is -1 which is not counted as a positive integer
    return 0;
}