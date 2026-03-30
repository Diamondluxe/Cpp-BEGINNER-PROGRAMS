// Program that shows the use of Define for debugging 
// Comment the #define DEBUG and see the change in the output
#include <iostream>
using namespace std;

#define DEBUG
int main(){
    int z,i;
    int array[100];

    for( i=0; i<100; i++){
        array[i]=i;
    }

    #ifdef DEBUG
    for(int i=0; i<100; i++){
        cout<<array[i]<<" "<<endl;
    }
    #endif

    cout<<"Enter a positive integer: ";
    cin>>z;
    
    int found=0;
    for( i=0; i<100; i++){
        if(array[i]==z){
            found=1;
            break;
        }
    }

    if (found==1)
    {
        cout<<"Number found at position "<<i<<endl;
    }
    else{
        cout<<"Number not found"<<endl;
    }

    return 0;
}
    