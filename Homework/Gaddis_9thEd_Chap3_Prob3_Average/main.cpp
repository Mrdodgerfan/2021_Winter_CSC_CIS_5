/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 14, 2021, 11:50 PM
 * Purpose:  Average
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
                                     // To hold the average
    //Declare Variables
    int inp;
    float avg;
   
    
    //Initialize Variables
    // Get the three test scores.
    cout<<"Input 5 numbers."<<endl;
    cin>>inp;
    avg=inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    
    //Map Inputs to Outputs -> Process
            // Calculate the average of the scores.
            avg=avg/5.0f;
    //Display Inputs/Outputs
            cout << fixed << showpoint << setprecision(1);
            cout << "The average = " << avg << endl;
            
    //Exit the Program - Cleanup
    return 0;
} 