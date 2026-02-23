//This program calculates the sum of squares of numbers stored in an array. 
#include <iostream>
using namespace std;
int main()
{
    int a[10];  //declare an array of size 10 to store the input from user
    int sumofsquares=0;
    int i=0;
    
    cout<<"Enter 10 numbers one by one : "<<endl; //prompt user to enter 10 numbers
   
    for(i=0; i<10; i++) //the loop continues until the user enters 10 numbers
    {
        cin>>a[i]; //store the input from user in the array a at index i
    }
    
    for(i=0; i<10; i++) //Calculating the sum of series
    {
        sumofsquares+=a[i]*a[i]; //calculate the sum of squares of numbers in the array a by multiplying each element of the array a with itself and adding it to sumofsquares
    }
   
    cout<<"The sum of squares is : "<<sumofsquares<<endl;
}