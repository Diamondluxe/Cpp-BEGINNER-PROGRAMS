/* Array Manipulation - Transpose of a Square Matrix: This program reads a matrix (two-
dimensional array), displays its contents, transposes it and then displays the transposed matrix.*/
#include <iostream> 
using namespace std;

const int size = 3;  // constant for the size of the square matrix

void readMatrix(int [][size]);  // function prototype to read values for the matrix
void displayMatrix(int [][size]);  // function prototype to display the matrix
void transposeMatrix(int [][size]);  // function prototype to transpose the matrix

int main()
{
    int a[size][size];  // declaring a two-dimensional array (square matrix) with specified size
     
    // reading values for the matrix from user input
    readMatrix(a);

    // displaying the original matrix
    cout << "The original matrix is: " << endl;
    displayMatrix(a);

    // transposing the matrix
    transposeMatrix(a);

    cout << "The transposed matrix is: " << endl;
    // displaying the transposed matrix
    displayMatrix(a);

    return 0;
}   

void readMatrix(int a[][size])  // function definition to read values for the matrix
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Please enter a value for position [" << i << "][" << j << "]: ";  // prompting user to enter value for each position in the matrix
            cin >> a[i][j];  // filling the matrix with user input
        }
    }

}

void displayMatrix(int a[][size])  // function definition to display the matrix
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << " ";  // displaying each element of the matrix
        }
        cout << endl;  // moving to the next line after displaying all elements in a row
    }
}

void transposeMatrix(int a[][size])  // function definition to transpose the matrix
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i ; j < size; j++)
        {
            int temp = a[i][j];  // storing the value of element at position [i][j] in a temporary variable
            a[i][j] = a[j][i];   // swapping elements at positions [i][j] and [j][i]
            a[j][i] = temp;
        }
    }
}

