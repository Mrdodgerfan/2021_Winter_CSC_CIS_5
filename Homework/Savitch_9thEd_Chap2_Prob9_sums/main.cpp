/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 17, 2021, 12:36 PM
 * Purpose:  sums
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    short negtSum,possSum,totlSum;
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative\n";
    for(int i=0, input=0; i<10; i++)
    {
        cin>>input;
        short& sumRef=(input > 0 ? possSum : negtSum); // Reference
        sumRef += input;
    }
    //Map inputs -> outputs
    totlSum= possSum+negtSum;
    
    //Display the outputs
cout<<"Negative sum = "<< setw(3)<< negtSum<< endl;
cout<<"Positive sum = "<< setw(3)<< possSum<< endl;
cout<<"Total sum    = "<< setw(3)<< totlSum;
    //Exit stage right or left!
    return 0;
}