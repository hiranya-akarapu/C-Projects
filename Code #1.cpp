

// Sai Hiranya Akarapu, sxa220254, program that calculates the number of seconds it will take for sound to travel through a medium//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //defining the menu number and the distance as variables with their respective data types//
    unsigned int menuNum; 
    double distance; 
    
    //values of the three different mediums' speed: air, water, and steel//
    const double airSpeed = 1100.0; 
    const double waterSpeed = 4900.0; 
    const double steelSpeed = 16400.0; 
    
    //printing the prompt and inputting the medium number chosen by the user//
    cout << "Select the medium that sound is traveling through:" << endl; 
    cout << "1 Air" << endl; 
    cout << "2 Water" << endl; 
    cout << "3 Steel" << endl; 
    cin >> menuNum; 
    
    //using switch statements to process the menu value that has been entered in//
    
    switch (menuNum) {
        case 1: 
        
            cout << "Enter distance (in feet)" << endl; 
            cin >> distance; 
            
            if (distance <= 0) {
            cout << "The distance must be greater than zero" << endl; 
            } else {
                double seconds = distance/airSpeed; //calculation of time in relation to airSpeed and distance when distance is > 0//
                //printing and proper formatting of the generated air output values (output values have 4 digits after the decimal place)//
                cout << "Air: " << fixed << setprecision(4) << distance << " ft" << endl; 
                cout << "Traveled for " << fixed << setprecision(4) << seconds << " seconds" << endl;
            }
            break; 
    
    
        case 2: 
        
            cout << "Enter distance (in feet)" << endl; 
            cin >> distance; 
            
            if (distance <= 0) {
            cout << "The distance must be greater than zero" << endl; 
            } else {
                double seconds = distance/waterSpeed; //calculation of time in relation to waterSpeed and distance when distance is > 0//
                //printing and proper formatting of the generated water output values (output values have 4 digits after the decimal place)//
                cout << "Water: " << fixed << setprecision(4) << distance << " ft" << endl; 
                cout << "Traveled for " << fixed << setprecision(4) << seconds << " seconds" << endl;
            }
            break; 
            
            
        case 3: 
        
            cout << "Enter distance (in feet)" << endl; 
            cin >> distance; 
            
            if (distance <= 0) {
            cout << "The distance must be greater than zero" << endl; 
            } else {
                double seconds = distance/steelSpeed; //calculation of time in relation to steelSpeed and distance when distance is > 0//
                //printing and proper formatting of the generated steel output values (output values have 4 digits after the decimal place)//
                cout << "Steel: " << fixed << setprecision(4) << distance << " ft" << endl; 
                cout << "Traveled for " << fixed << setprecision(4) << seconds << " seconds" << endl;
            }
            break;  
           
            
        default: //default is used when the user inputs a value of 0 or a number larger than 3 since there are only 3 medium number choices : (1,2,3)//
            //when a value that is 0 or > than 3 is entered the program will print the following sentences//
            cout << "The menu value is invalid. Please run the program again." << endl; 
            break;
            
    }
    
    return 0;     
    
}
    
    
    
    
    
    

   
