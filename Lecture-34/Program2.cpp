// Class-specific new and delete operators 
#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

class Name{
    private:
        char name[25];
    public:
        Name(const char *n){
            strcpy(name, n);
        }
        void displayName(){
            cout<<name<<endl;
        }
        void *operator new(size_t size){
            void *p = malloc(size);
            return p;
        }
        void operator delete(void *p){
            free(p);
        }
};

int main()
{
    Name* n[10];
    char str[25];
    for(int i=0; i<10; i++){
        cout<<"Enter name "<<i+1<<": ";
        cin>>str;
        n[i] = new Name(str);
    }
    for(int i=0; i<10; i++){
        n[i]->displayName();
        delete n[i];
    }
    return 0;
}

