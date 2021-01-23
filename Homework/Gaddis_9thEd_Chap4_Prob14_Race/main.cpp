/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 17, 2021, 12:36 PM
 * Purpose:  Race
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    // For name
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   string rn1,  // First runner user inputs
          rn2,  // Second runner user inputs
          rn3;  // Third runner user inputs
    float rn1t, // First runners time user inputs
          rn2t, // Second runners time user inputs
          rn3t; // Third runners time user inputs
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout << "Input 3 Runners"<<endl;
    cout << "Their names, then their times"<<endl;
    cin>>rn1,
    cin>>rn1t;
    cin>>rn2,
    cin>>rn2t;
    cin>>rn3,
    cin>>rn3t;
   
    //Map inputs -> outputs
    if (rn1t <= rn2t && rn1t <= rn3t && rn2t <= rn3t) {
        cout << rn1 <<"\t"<<setw(3)<<rn1t <<endl;
        cout << rn2 <<"\t"<<setw(3)<< rn2t <<endl;
        cout<< rn3 <<"\t"<<setw(3)<<rn3t;
    } else if (rn1t <= rn2t && rn1t <= rn3t && rn3t <= rn2t) {
        cout<< rn1 <<"\t"<<setw(3)<<rn1t <<endl;
        cout<< rn3 <<"\t"<<setw(3)<< rn3t <<endl;
        cout<< rn2 <<"\t"<<setw(3)<<rn2t;
    } else if (rn2t <= rn1t && rn2t <= rn3t && rn1t <= rn3t) {
        cout<< rn2 <<"\t"<<setw(3)<<rn2t <<endl;
        cout<< rn1 <<"\t"<<setw(3)<<rn1t <<endl;
        cout<< rn3 <<"\t"<<setw(3)<< rn3t;
    } else if (rn2t <= rn1t && rn2t <= rn3t && rn3t <= rn1t) {
        cout<< rn2 <<"\t"<<setw(3)<< rn2t <<endl;
        cout<< rn3 <<"\t"<<setw(3)<< rn3t<<endl;
        cout<< rn1 <<"\t"<<setw(3)<< rn1t;
    } else if (rn3t <= rn1t && rn3t <= rn2t && rn1t <= rn2t) {
        cout<< rn3 <<"\t"<<setw(3)<<rn3t<<endl;
        cout<< rn1 <<"\t"<<setw(3)<<rn1t <<endl;
        cout<< rn2 <<"\t"<<setw(3)<<rn2t;
    } else {
        cout<< rn3 <<"\t"<<setw(3)<< rn3t <<endl;
        cout<< rn2 <<"\t"<<setw(3)<< rn2t <<endl;
        cout<< rn1<<"\t"<<setw(3)<<rn1t;
    }

    //Display the outputs

    //Exit stage right or left!
    return 0;
}