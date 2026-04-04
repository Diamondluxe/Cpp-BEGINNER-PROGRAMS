/*This program demostrate the use of show base.
It displays a number in hex, oct and decimal form*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x=77;

    cout.setf(ios::showbase);  //show base is set to display the base of the number in the output. When this flag is set, the output will include a prefix that indicates the base of the number. For example, hexadecimal numbers will be prefixed with "0x", octal numbers will be prefixed with "0", and decimal numbers will have no prefix.
    
    cout.setf(ios::oct, ios::basefield);  //octal output
    cout<<"Octal: "<<x<<endl;  //The output will be "Octal: 0115", where "0" indicates that the number is in octal format.  

    cout.setf(ios::hex, ios::basefield);  //hexadecimal output
    cout<<"Hexadecimal: "<<x<<endl;  //The output will be "Hexadecimal: 0x4d", where "0x" indicates that the number is in hexadecimal format.

    cout.setf(ios::dec, ios::basefield);  //decimal output
    cout<<"Decimal: "<<x<<endl;  //The output will be "Decimal: 77", where no prefix is needed for decimal format.

    return 0;
}