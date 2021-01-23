/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 14, 2021, 11:50 PM
 * Purpose:  Temperature
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
    float ctemp, ftemp;
    
    
    //Initialize Variables
    cout <<"Temperature Converter"<<endl;
    cout << "Input Degrees Fahrenheit"<<endl;
    cin >> ftemp;
          
     
    //Map Inputs to Outputs -> Process
    ctemp=ftemp-32;
    ctemp=ctemp*5/9.0f;
    
    //Display Inputs/Outputs
    cout<<fixed;
    cout <<setprecision(1)<<ftemp<<" Degrees Fahrenheit = "<<setprecision(1)<<ctemp<<" Degrees Centigrade";
    
    
    
            
    //Exit the Program - Cleanup
    return 0;
} 