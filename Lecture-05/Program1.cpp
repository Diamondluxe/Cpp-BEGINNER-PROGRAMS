/*  This program test that if Sara's age is greater than Amara's age and then displays it.
*/
#include <iostream>
using namespace std;   
main()
{
    int ageSara, ageAmara;
    cout << "Enter Amara's age: ";
    cin >> ageAmara ;
    cout << "Enter Sara's age: ";
    cin >> ageSara;
    if(ageSara > ageAmara)
        cout << "Sara is older than Amara." << endl;
    else if(ageAmara > ageSara  )
        cout << "Amara is older than Sara." << endl;
    else
        cout << "Amara and Sara are of the same age." << endl;
    return 0;
}