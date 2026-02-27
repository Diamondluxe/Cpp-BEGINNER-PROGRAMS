//This program demonstrates that when an array is passed to a function then it is a call by 
//reference and the changes made by the function effects the original array 
#include <iostream>
using namespace std;
void getvalues(int[],int); // function prototype to get values for the array
int main()
{
    int num[10], i;  // an array of integers
    getvalues(num,10); // calling the function to get values for the array

    cout << "The values in the array are: ";  // displaying the values in the array
    for (i = 0; i < 10; i++)
    {
        cout << num[i] << " ";  // printing each element of the array
    }
    return 0;
}

void getvalues(int num[], int size)  // function definition to get values for the array
{
    int i;
    for (i = 0; i < size; i++)
    {
        num[i] = i; // assigning values to the array, here we are assigning the index value to each element of the array
    }
}
