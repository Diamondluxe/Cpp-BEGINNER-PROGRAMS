// This program is used to find a number from the array. 
#include <iostream>
using namespace std;
int main()
{
    int z, i;
    int a[100];  //declare an array of size 100

    cout << "Enter any positive integer : ";  //prompt user to enter a positive integer
    cin >> z;  //store the input from user in variable z
    int found=0;

    for(i=0; i<100; i++)  //the loop continues until the user enters a positive integer or the array a is full (i<100)
    {
       a[i]=i;  //store the value of i in the array a at index i, so the array a will contain the numbers from 0 to 99
    }

    for (i=0; i<100; i++)  //the loop continues until the user enters a positive integer or the array a is full (i<100)
    {
        if(a[i]==z)  //if the value of a at index i is equal to z, then print the index i and break the loop
        {
            found =1;  //set found to 1 to indicate that the number is found in the array a
            break;
        }
    }

    if(found==1)  //if found is 1, then print the index i, otherwise print that the number is not found in the array a
    {
        cout<<"We found the integer at index : "<<i<<endl;
    }
    else
    {
        cout<<"The number was not found."<<endl;
    }
}