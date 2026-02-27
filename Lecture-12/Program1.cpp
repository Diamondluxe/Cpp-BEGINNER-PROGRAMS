// This program takes two arrays of 5 integers from user 
//displays them and after comparing them displays the result
#include <iostream>
using namespace std;
int main()
{
    int num1[5], num2[5];  // two arrays of 5 integers each
    int i, count = 0;
   
    cout << "Enter 5 integers for first array: ";  // taking input for first array
    for (i = 0; i < 5; i++)
    {
        cin >> num1[i];
    }
  
    cout << "Enter 5 integers for second array: ";  // taking input for second array
    for (i = 0; i < 5; i++)
    {
        cin >> num2[i];
    }
  
    cout << "First array: ";  // displaying first array
    for (i = 0; i < 5; i++)
    {
        cout << num1[i] << " ";
    }
  
    cout << "\nSecond array: ";  // displaying second array
    for (i = 0; i < 5; i++)
    {
        cout << num2[i] << " ";
    }
  
    // comparing the two arrays
    for (i = 0; i < 5; i++)
    {
        if (num1[i] != num2[i])  // if any element is not equal, the arrays are not equal
        {
            cout << "\nThe arrays are not equal" << endl;
            count = 0;
            break;
        }
        count =1;  // if all elements are equal, count will be 1 and the arrays are equal
    }
  
    if (count)  // if count is 1, the arrays are equal
    {
        cout << "\nThe arrays are equal" << endl;
    }
}