/*   
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 22, 2022, 12:36 PM
 * Purpose:  Pay In Pennies
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Set the random number seed
    
    //Declare Variables
        unsigned short  wrkDay;
    //Initialize or input i.e. set variable values
    cin>>wrkDay;
    //Display the outputs
 cout<<setprecision(2)<<fixed;    
 cout<<"Pay = $"<<(pow(2,wrkDay)-1)/100.0f;
    //Exit stage right or left!
    return 0;
}