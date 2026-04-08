/* This program uses bubble sorting to sort a given array. 
We use swap function to interchange the values by using pointers. */
#include <iostream>
using namespace std;

void swaps(int *, int *); // function prototype to swap two integers using pointers

int main()
{
    int x[10]={1,5,6,2,7,9,8,4,3,10};  // an array of integers initialized with unsorted values
    int i, j, swap;  

    // Bubble sort algorithm to sort the array in ascending order
    for (i = 0; i < 10; i++)  // outer loop to traverse through the array
    {
        swap = 0;  // flag to check if any swapping occurred in the inner loop
        for (j = 0; j < 9; j++)  // inner loop to compare adjacent elements
        {
            if(x[j] > x[j + 1])  // comparing adjacent elements
            {
                swap++;  // incrementing swap to indicate that we are checking for swapping
                swaps(&x[j], &x[j + 1]); // calling the swap function to swap adjacent elements if they are in wrong order
            }
        }

       if(swap == 0)  // if no swapping occurred in inner loop, array is sorted
        {
            break;  // breaking out of outer loop as array is already sorted
        }
        
        for (int k = 0; k < 10; k++)  // loop to display the sorted array
        {
            cout << x[k] << " ";  // printing each element of the sorted array
        }
        cout << endl;  // printing a new line after displaying the sorted array
        
    }

    
    return 0;
}



void swaps(int *a, int *b)  // function prototype to swap two integers using pointers
{
   if(*a > *b)  // comparing the values at address a and b, if value at a is greater than value at b then we will swap them
    {
    int temp;  // temporary variable to hold the value during swapping
    temp = *a;  // storing the value at address a in temp
    *a = *b;    // assigning the value at address b to address a
    *b = temp;  // assigning the value stored in temp to address b
    }
}
