/* The following program explains the customized new and delete operators */ 
#include<iostream>
using namespace std;

void *operator new(size_t size)
{
    void *p = calloc(1, size);
    return p;
}

void operator delete(void *p)
{
    free(p);
}

int main()
{
    int *p = new int[10];

    for(int i=0; i<10; i++)
    {
        cout<<" "<<p[i];
    }

    delete [] p;
    return 0;
}