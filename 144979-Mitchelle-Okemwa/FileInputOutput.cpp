#include <iostream>
#include <fstream> //For file input and output
#include <string> //For string input
 
 using namespace std;

 int main()
 {
    /*Write to a file. output.txt file will be created
    in the directory of this source file
    */
   ofstream outFile("output.txt");
   outFile << "Writing to a file." << endl;
   outFile.close();


   //Reading from a file
   ifstream inFile("output.txt");
   string line;
 }