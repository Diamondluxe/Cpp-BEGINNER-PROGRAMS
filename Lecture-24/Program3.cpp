// This program shows the dynamic allocation of memory according to the 
//requirement to store a certain number of a structure. 

#include <iostream>
using namespace std;

struct Employee{
    char name[50];
    int id;
};

int main(){
    int num;
    Employee *emp;

    cout<<"Enter the number of employees: ";
    cin>>num;

    emp= (Employee*) malloc(num*sizeof(Employee));   //dynamic memory allocation for an array of Employee structures
    if(emp==NULL){  //check if memory allocation was successful
        cout<<"Memory allocation failed!"<<endl;
        return 1;  //exit with error code
    }

    cout<<"Memory for "<<num<<" employees allocated successfully!"<<endl;
    free(emp);  //deallocate the memory allocated for the array of Employee structures
    return 0;
}