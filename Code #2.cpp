
//Sai Hiranya Akarapu, sxa220254, program that reads sales information from a file and writes out a bar chart for each of the stores//

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    //defining the variables//
    unsigned int storeNum;
    long long int salesVal; 
    
    //this part of the code prints the prompt and reads in a file name from cin//
    cout << "Enter input file name" << endl; 
    string inputFileName; 
    cin >> inputFileName; 
    
    //this part of the code opens the input file//
    ifstream inputFile(inputFileName)
    
    //this part of the code displays a message if the input file does not open and quits the program//
    ;if (!inputFile.is_open()) {
        cout << "File \"" << inputFileName << "\" could not be opened" << endl; 
        
    }
    
    //this part of the code will open the output file called (saleschart.txt) 
    ofstream outputFile ("saleschart.txt")
    
    //this part of the code displays a messgae if the output file does not open//
    ;if (!outputFile.is_open()) {
        cout << "Output file cannot open." << endl;
        //code below closes input file//
        inputFile.close();
    }
    
    //the part of the code is my way of keeping track if the data is valid or not//
    //the code uses a boolean data type to check validity of data//
    bool validDataCheck = false; 
    
    //the part of the code creates the headings for the output file if the data is valid//
    outputFile << "SALES BAR CHART" << endl; 
    outputFile << "(Each * equals 5,000 dollars)" << endl; 
    
    //this part of the code uses a while loop and if else statement that does three things//
    while (inputFile >> storeNum >> salesVal) {
        // 1 : makes sure that if the storeNum is less that 1 or greater than 99 the following message is displayed//
        if (storeNum < 1 || storeNum > 99) {
            cout << "The store number " << storeNum << " is not valid" << endl; 
        // 2 : makes sure that is the salesNum is less than 0, the following message is displayed// 
        } else if (salesVal < 0) { 
            cout << "The sales value for store " << storeNum << " is negative" << endl; 
        } else {
        // 3 : indicates that the data is valid and processed//
            validDataCheck = true; 
            
            
            //code that outputs a string of characters where each * represents $5,000 in sales for that store//
            //For each 5,000 in sales it outputs one *//
            //calculation for this is below//
            int numStars = static_cast <int> (salesVal/5000);
            
            //this part of the code outputs the sales bar chart to the output file//
            outputFile << "Store " << setw(2) << storeNum << ": " ;
            for (int i = 0; i < numStars; i++) { 
                outputFile << '*' ; 
            }
            outputFile << endl; 
            
        }
        
    }   
    
    //this part of the code closes the input and output files//
    inputFile.close();
    outputFile.close(); 
    

    return 0;
}