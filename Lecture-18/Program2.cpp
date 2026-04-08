//This program writes into a txt file “myfileOut.txt” which contains the  
//  “Diamond Luxe Welcomes You!” 
#include <iostream>
#include <fstream>  // Include the fstream library for file handling
using namespace std;
int main()
{
    ofstream Outfile;  // Create an output file stream object
    Outfile.open("MyfileOut.txt", ios::out);  // Open the file for writing
    if (!Outfile)  // Check if the file was opened successfully
    {
        cout << "Unable to open file";
        return 1; // Exit with an error code
    }
    else
    {
        Outfile << "Diamond Luxe Welcomes You!" << endl;  // Write the message to the file
        Outfile.close();  // Close the file
    }
    
    return 0;
}