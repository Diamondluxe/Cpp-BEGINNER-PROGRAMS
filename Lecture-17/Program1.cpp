//This program dispalys the ASCII code table
#include <iostream>
using namespace std;
int main()
{
    int i;
    char c;
    for (i=0; i<256; i++)
    {
        c=i;
        cout<<i<<" "<<c<<endl;
    }
    return 0;
}