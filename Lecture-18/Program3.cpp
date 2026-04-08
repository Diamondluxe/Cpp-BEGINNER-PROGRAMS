// Write a program, which reads an input file of employee’s i.e. “employeein.txt”, add 
//the salary of each employee by 2000, and write the result in a new file 
//“employeeout.txt”
#include <iostream>
#include <fstream>  // Include the fstream library for file handling
using namespace std;
int main()
{
    ifstream infile;  // Create an input file stream object
    ofstream outfile; // Create an output file stream object
    char name[20];
    int salary;

    if(!infile)  //Check if the file was opened successfully
    {
        cout << "Unable to open input file";
        return 1; // Exit with an error code
    }
    else if (!outfile)  // Check if the output file was opened successfully
    {
        cout << "Unable to open output file";
        return 1; // Exit with an error code
    }
    else
    {
        infile.open("Employeein.txt");  //Open the input file for reading
        outfile.open("Employeeout.txt", ios::out);  //Open the output file for writing

        if (!outfile)  // Check if the output file was opened successfully
        {
            cout << "Unable to open output file";
            return 1; // Exit with an error code
        }

        outfile<<"Employee Information (Updated Salary):" << endl; // Write the header to the output file
        outfile<<"Name  Salary" << endl; // Write the column headers to the output file

        while (!infile.eof())  // Read the employee information from the input file
        {
            infile >> name >> salary; // Read the employee information from the input file
            salary += 2000; // Add 2000 to the salary
            outfile << name << " " << salary << endl; // Write the updated information to the output file
        }

        infile.close();  // Close the input file
        outfile.close(); // Close the output file
    }
    
  
    return 0;
}