/* Array Manipulation - Flipping of a Matrix (reversing the row order): This program reads a 
matrix (two-dimensional array), displays its contents and also displays the flipped matrix 
*/
#include <iostream>
using namespace std;

const int rows = 3;  // constant for number of rows in the matrix
const int cols = 3;  // constant for number of columns in the matrix

void readMatrix(int [][3]);  // function prototype to read values for the matrix
void displayMatrix(int [][3]);  // function prototype to display the matrix
void flipMatrix(int [][3]);  // function prototype to flip the matrix

int main()
{
    int a[rows][cols];  // declaring a two-dimensional array (matrix) with specified number of rows and columns
     
    // reading values for the matrix from user input
    readMatrix(a);

    // displaying the original matrix
    cout << "The original matrix is: " << endl;
    displayMatrix(a);

    // flipping the matrix (reversing the row order)
    cout << "The flipped matrix is: " << endl;
    flipMatrix(a);

    return 0;
}

void readMatrix(int a[][3])  // function definition to read values for the matrix
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Please enter a value for position [" << i << "][" << j << "]: ";  // prompting user to enter value for each position in the matrix
            cin >> a[i][j];  // filling the matrix with user input
        }
    }

}

void displayMatrix(int a[][3])  // function definition to display the matrix
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";  // printing each element of the matrix
        }
        cout << endl;  // new line after each row
    }
}

void flipMatrix(int a[][3])  // function definition to flip the matrix (reverse the row order)
{
    for (int i = rows - 1; i >= 0; i--)  // iterating through the rows in reverse order
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";  // printing each element of the matrix in flipped order
        }
        cout << endl;  // new line after each row
    }
}