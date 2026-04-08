//This program is used to find a number from the array. 
#include <iostream>
using namespace std;
int main()
{
    int z, i;
    int a[100];  //declare an array of size 100

    cout << "Enter any positive integer : ";  //prompt user to enter a positive integer
    cin >> z;  //store the input from user in variable z
    int found=0;

    for(i=0; i<100; i++)  //Intializing the array a with values from 0 to 99
    {
       a[i]=i;  
    }

    for (i=0; i<100; i++)  //loop to search the number
    {
        if(a[i]==z)  //if the value of a at index i is equal to z,
        {
            found =1;  //set found to 1 and break the loop
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
    return 0;
}