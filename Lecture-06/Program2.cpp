/* This program calculates sum of even numbers for a integers */
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num = 1;
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    while (num <= limit) {
        if (num % 2 == 0) {
            sum += num;
        }
        num++;
    }
    cout << "The sum of even numbers for first " << limit << " integers starting from 1 is: " << sum << endl;
    return 0;
}