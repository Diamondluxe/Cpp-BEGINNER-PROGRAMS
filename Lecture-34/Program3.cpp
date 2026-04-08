/*The following example defines the IntArray class, where each object contains 
an array of integers. This class overloads the [] operator to perform 
range checking. */
#include<iostream>
using namespace std;

const int Limit=5;

class Intarray{
    private:
        int arr[Limit];
    public:
        Intarray(){
            for(int i=0; i<Limit; i++){
                arr[i]=0;
            }
        }
        int &operator [](int i){
            if(i<0 || i>=Limit){
                cout<<"Index out of range!"<<endl;
                exit(1);
            }
            return arr[i];
        }
};

int main()
{
    Intarray a;

    for(int i=0; i<Limit; i++){
        a[i]=i*10;
    }
    cout<<"Array elements:";
    for(int i=0; i<Limit; i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    return 0;

}