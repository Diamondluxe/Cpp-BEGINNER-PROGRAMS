/* This program calculate the sum of first 1000 integers */ 
#include <iostream>   
using namespace std;    
int main()    
{    
    int sum = 0;
    int num = 1;    
     
    while (num <= 1000) {
        sum += num;
        num++;
    }
    cout << "The sum of first 1000 integers is: " << sum << endl;    
    return 0;    
}