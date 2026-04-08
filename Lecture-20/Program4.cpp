/* This program calculates the average age and average GPA of a class. Also determine 
the grade of the class and the student with max GPA. We will use a student structure and 
manipulate it to get the desired result. */ 
#include<iostream>
using namespace std;
struct Student
    {
        char name[20];
        char course[30];
        int age;
        float gpa;
    };
int main(){
    int no;
    int totalage, index;
    float totalgpa, averagegpa, maxgpa, averageage;

    cout<<"Enter total no of Student: ";
    cin>>no;

    Student s[no];

    for(int i=0; i<no; i++){
        cout<<"Enter data for Student # : " << i + 1 << endl; 
        cout << "Enter the Student's Name : " ; 
        cin >> s[i].name ; 
        cout << "Enter the Student's Course : " ; 
        cin >> s[i].course ; 
        cout << "Enter the Student's Age : " ; 
        cin >> s[i].age ; 
        cout << "Enter the Student's GPA : " ; 
        cin >> s[i].gpa ; 
    }

    totalage=0;
    totalgpa=0;
    maxgpa=0;
    for(int j=0;j<no;j++)
    {
        totalage += s[j].age;
        totalgpa += s[j].gpa;
        if(s[j].gpa>maxgpa)
        {
            maxgpa=s[j].gpa;
            index=j;
        }
    }
    averageage = totalage / no ; 
    cout << "\n The average age is : " << averageage << endl;
    averagegpa = totalgpa / no ; 
    cout << "\n The average GPA is : " << averagegpa << endl; 
    cout << "\n Student with max GPA is : " << s[index].name << endl ; 

     // Determining the Grade of the class 
     if (averagegpa > 4) 
    { 
        cout << "\n Wrong grades have been enter" << endl ; 
    } 
    else if ( averagegpa == 4) 
    { 
        cout << "\n The average Grade of the class is : A" << endl; 
    } 
    else if ( averagegpa >= 3) 
    { 
        cout << "\n The average Grade of the class is : B" << endl; 
    } 
    else if ( averagegpa >= 2) 
    { 
        cout << "\n The average Grade of the class is : C" << endl; 
    } 
    else 
    {
        cout << "\n The average Grade of the class is : F" << endl; 
    } 
    return 0;
}
    