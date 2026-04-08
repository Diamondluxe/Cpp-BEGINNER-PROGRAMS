/* This program calculates the discount amount for a customer. As different discount 
percentage applies on different amount so program is using if statement for deciding 
which discount is applicable and display the result. **/
#include <iostream>
using namespace std;
int main() {
    double amount, discount, finalAmount;
    cout << "Enter the total amount: ";
    cin >> amount;

    if (amount >= 5000) {
        discount = 0.20 * amount; // 20% discount
    }
    else {
        discount = 0.10 * amount; // 10% discount
    }

    finalAmount = amount - discount;
    cout << "Discount amount: " << discount << endl;
    cout << "Final amount to be paid: " << finalAmount << endl;

    return 0;
}
