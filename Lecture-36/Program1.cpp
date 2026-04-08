//Thsi program demostrate the justified output

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i=-123;
    cout.setf(ios::left, ios::adjustfield);  //left justified output
    cout<<"|"<<setw(12)<<i<<"|"<<endl;  //setw(12) sets the width of the output field to 12 characters, and the value of i is printed within that field. The left justification ensures that the value is aligned to the left side of the field, and any extra space is added to the right.
    
    cout.setf(ios::right, ios::adjustfield);  //right justified output
    cout<<"|"<<setw(12)<<i<<"|"<<endl;  //setw(12) sets the width of the output field to 12 characters, and the value of i is printed within that field. The right justification ensures that the value is aligned to the right side of the field, and any extra space is added to the left.
    
    cout.setf(ios::internal, ios::adjustfield);  //internal justified output
    cout<<"|"<<setw(12)<<i<<"|"<<endl;  //setw(12) sets the width of the output field to 12 characters, and the value of i is printed within that field. The internal justification ensures that the sign of the number is aligned to the left side of the field, while the digits are aligned to the right side, with any extra space added in between.
   
    cout.setf(ios::left | ios::right, ios::adjustfield);  //left and right justified output
    cout<<"|"<<setw(12)<<i<<"|"<<endl;  //setw(12) sets the width of the output field to 12 characters, and the value of i is printed within that field. The combination of left and right justification ensures that the value is centered within the field, with any extra space added to both sides.
    return 0;
}