/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 14, 2021, 11:50 PM
 * Purpose:  Insurance
 *           
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;


//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
                                    
    //Declare Variables
    float replacement_cost, // Home Value
          minimum_amount;   // Minimum amount to insure
    
   
    
    //Initialize Variables
    float PERCENTAGE=.80;  // Minimum percentage recommended
          
          
          
    //Map Inputs to Outputs -> Process
    cout <<"Insurance Calculator"<<endl;
    cout << "How much is your house worth?";
    cin >> replacement_cost;
    cout << endl;
  
    // Calculate minimum amount to insure.
    minimum_amount= replacement_cost*PERCENTAGE;
    
    
    //Display Inputs/Outputs
    cout << "You need $"<< minimum_amount<<" of insurance.";
    cout << setprecision(2)<<fixed;
   
    
    
            
    //Exit the Program - Cleanup
    return 0;
} 