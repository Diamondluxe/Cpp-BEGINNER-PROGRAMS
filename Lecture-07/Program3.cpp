//This program displays the sum of squares of integers from 1 to n
#include <iostream>
using namespace std;
int main() 
{
    int n;
    int sumOfSquares = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sumOfSquares += i * i;
    }

    cout << "The sum of squares of integers from 1 to " << n << " is: " << sumOfSquares << endl;

    return 0;
}