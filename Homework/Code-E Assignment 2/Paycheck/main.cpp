/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 15, 2021, 12:36 PM
 * Purpose:  Paycheck
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
     
    int   regHrs,
          ovrHrs,
          totHrs;
    float grssPay,
          payRate;
          
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate;
    cin>>totHrs;
    ovrHrs=(totHrs>40)?totHrs:40;
    regHrs=(totHrs<40)?totHrs:40;
    ovrHrs=ovrHrs-40;
    //Map inputs -> 
    grssPay=(regHrs*payRate)+(ovrHrs*payRate*2);
    //Display the outputs
cout<<fixed;
if (grssPay<1000){
    cout<<"Paycheck = $ "<<setprecision(2)<<grssPay;
}
else{
    cout<<"Paycheck = $"<<setprecision(2)<<grssPay;
}
    //Exit stage right or left!
    return 0;
}