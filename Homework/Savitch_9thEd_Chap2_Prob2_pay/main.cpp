/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 15, 2021, 12:36 PM
 * Purpose:  Pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>    //Formatting Library
#include<cstdlib>    //Random Number Function
#include<ctime>      //Time Library to set the random number seed
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
   
    //Declare Variables
     
    float
          newAn,     //New annual salary $
          newMnth,   //New Monthly salary $
          rtroPay,   //Retroactive Pay $
          payIn,     //Pay Increase
          prAn;      // Previous Annual salary $
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>prAn;
    payIn=0.076f;
    
   
    //Map inputs -> outputs
    newAn=prAn+(prAn*payIn);
    newMnth=newAn/12;
    rtroPay=payIn*prAn/2;
    //Display the outputs
    cout<<fixed;
    cout<<"Retroactive pay    = $"<<setw(7)<<setprecision(2)<<rtroPay<<endl;
    cout<<"New annual salary = $"<<setw(7)<<setprecision(2)<<newAn<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<setprecision(2)<<newMnth;
    //Exit stage right or left!
    return 0;
}