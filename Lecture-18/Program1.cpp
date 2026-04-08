//This program reads from a txt file “myfile.txt” which contains the employee information.
#include <iostream>
#include <fstream>  // Include the fstream library for file handling
using namespace std;
int main()
{
    ifstream infile;  // Create an input file stream object
    char name[20];
    int salary;
    char department[20];
    infile.open("Myfile.txt");  //Open the file for reading
    if (!infile)  //Check if the file was opened successfully
    {
        cout << "Unable to open file";
        return 1; // Exit with an error code
    }
    else
    {
        cout << "Employee Information:" << endl;
        while (!infile.eof())  // Loop until the end of the file is reached
        {
            infile >> name >> salary >> department;  // Read the employee information from the file
            cout << "Name: " << name << ", Salary: " << salary << ", Department: " << department << endl;
        }
        infile.close();
    }
}
