/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 14, 2021, 11:50 PM
 * Purpose:  Trig
 *           
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
using namespace std;


//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
                                    
    //Declare Variables
    const float PI =3.14159265/180;
    float angles, radians,cosDg,sinDg,tanDg; 
          
    
   
    
    //Initialize Variables
    
            cout<<"Calculate trig functions"<<endl;
            cout<<"Input the angle in degrees."<<endl;
            cin>>angles;
            
    //Map Inputs to Outputs -> Process
            sinDg=sin(angles* PI );
            cosDg=cos(angles* PI );
            tanDg=tan(angles* PI );
    cout <<fixed;
    cout <<"sin("<< setprecision(0)<<angles<<") = "<< setprecision(4)<<sinDg <<endl;
    cout <<"cos("<< setprecision(0)<<angles<<") = "<< setprecision(4)<<cosDg<<endl;
    cout <<"tan("<< setprecision(0)<<angles<<") = "<< setprecision(4)<<tanDg;
   
  
    // Calculate minimum amount to insure.
    
    //Display Inputs/Outputs
   
            
    //Exit the Program - Cleanup
    return 0;
} 