//This program calculates the average age of a class of students 
//using dynamic memory allocation

#include <iostream>
using namespace std;

int main(){
    int no, *iptr, *sptr, totalage=0;
    cout<<"Enter the number of students in the class: ";
    cin>>no;

    iptr = (int*)malloc(no*sizeof(int));  //dynamic memory allocation for an array of integers
    if(iptr==NULL){  //check if memory allocation was successful
        cout<<"Memory allocation failed!"<<endl;
        return 1;  //exit with error code
    }
    sptr=iptr;  //point sptr to the same location as iptr
    for(int i=1; i<=no; i++){
        cout<<"Enter the age of student "<<i<<": ";
        cin>>*sptr;
        totalage+=*sptr;
        sptr++;
    }
    cout<<"The average age of the students is: "<<totalage/no<<endl;

    free(iptr);  //deallocate the memory allocated for the array
    sptr=NULL;   //set sptr to NULL to avoid dangling pointer
    return 0;
}