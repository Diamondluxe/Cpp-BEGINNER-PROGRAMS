//This program reads from a GetLine text file line by line 
#include <iostream>
#include <fstream>  // Include the fstream library for file handling
using namespace std;
int main()
{
    ifstream infile;  // Create an input file stream object
    char line[100];
    infile.open("GetLineFile.txt");  //Open the file for reading
    if (!infile)  //Check if the file was opened successfully
    {
        cout << "Unable to open file";
        return 1; // Exit with an error code
    }
    else
    {
        while (!infile.eof())  // Loop until the end of the file is reached
        {
            infile.getline(line, 100);  // Read a line from the file
            cout << line << endl;  // Print the line read from the file
        }
        infile.close();
    }
    return 0;
}