//This program takes values from user to fill a two-dimensional array (matrix) having two
//rows and three columns. And then displays these values in row column format. 
#include <iostream>
using namespace std;
int main()
{
    int matrix[2][3];  // a two-dimensional array with 2 rows and 3 columns
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout<<"Please enter a value for position of ["<<i<<","<<j<<"]: ";  // prompting user to enter value for each position in the matrix
            cin >> matrix[i][j];  // filling the matrix with user input
        }
    }

    cout<< "The values enter for the matrix are: " << endl;  // displaying the values in row column format
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
