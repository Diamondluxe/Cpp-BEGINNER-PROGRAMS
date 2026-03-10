//This program reads name and salary from a txt file 
// Calculate the salaries and write the total in an output file 
#include <iostream>
#include <fstream>  // Include the fstream library for file handling
using namespace std;
int main()
{
    ifstream infile;
    ofstream outfile;
    char name[20];
    int salary;
    int totalsalary = 0;
    infile.open("Employeein.txt");  //Open the file for reading
    outfile.open("Employeetotalout.txt");  //Open the file for writing
    if (!infile)  //Check if the file was opened successfully
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
        while (!infile.eof())  // Loop until the end of the file is reached
        {
            infile >> name >> salary;  // Read the employee information from the file
            totalsalary += salary; // Add the salary to the total salary
        }
        outfile << "Total Salary: " << totalsalary << endl; // Write the total salary to the output file
        infile.close();  // Close the input file
        outfile.close(); // Close the output file
    }

    return 0;
}   