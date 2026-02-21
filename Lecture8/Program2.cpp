//This program gets salary input from user and calculates and displays the net payable 
//amount after deduction according the conditions 
#include <iostream>
using namespace std;
int main()
{
    int salary;
    float netPayable,deduction;
    cout << "Enter your salary: ";
    cin >> salary;

    switch(salary/10000)
    {
        case 0:
            deduction = 0; // No deduction for salaries under 10000
            netPayable = salary; // Net payable is the same as salary for salaries under 10000
            break;
        case 1:
            deduction = 1000; // Deduct 10000 for salaries between 10001 and 19999
            netPayable = salary - deduction; // Calculate net payable after deduction
            break;
        default:
            deduction = salary * 7/100; // Deduct 7% for salaries 20000 and above
            netPayable = salary - deduction; // Calculate net payable after deduction
    }
    cout << "Net Payable (salary - deduction) = " << salary << " - " << deduction << " = " << netPayable << endl;

    return 0;
}