/* This program uses array manipulation using indexing */ 
#include <iostream>
using namespace std;
int main()
{
    int multi[5][10];  // a two-dimensional array with 5 rows and 10 columns
    int *ptr;  // a pointer to an integer
    ptr = *multi;
    
     /* Initialize the array elements */ 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            multi[i][j] = i * j;  // assigning values to the array, here we are assigning the product of the indices to each element of the array
        }
    }

    /* Array manipulation using indexing */ 
     cout << "\n Array manipulated using indexing is: \n"; 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << multi[i][j] << " ";  // printing each element of the array using indexing
        }
        cout << endl;
    }

    /* Array manipulation using pointer */ 
    cout << "\n Array manipulated using pointer is: \n"; 
    for (int k = 0; k < 50; k++)
    {
           cout << *ptr  << " ";  // printing each element of the array using pointer 
           ptr++;  // incrementing the pointer to point to the next element in the array
    }
    return 0;
}