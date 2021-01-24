/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 21, 2021, 12:36 PM
 * Purpose:  Sum
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int usrnmbr,   // Number entered by user 
        total = 0; // The Total sum 
    //Initialize or input i.e. set variable values
   // cout << "Enter a positive number: ";
    cin >> usrnmbr;
    //Map inputs -> outputs
       
    
    for (int i = 1; i <= usrnmbr; i++)
        total += i;
    
    //Display the outputs
        cout << "Sum = " << total; 
    //Exit stage right or left!
    return 0;
}