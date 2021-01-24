/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez   
 * Created on January 22, 2021, 12:36 PM
 * Purpose:  Rectangle
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
    int lnth;
    char slct;
    //Initialize or input i.e. set variable values
    cin>>lnth;
    cin>>slct;
    //Map inputs -> outputs
        for (int i=0;i<lnth-1;i++)
        {
            for(int j=0;j<lnth-1;j++)
            {
            cout<<slct;
        }
        cout<<slct<<endl;
    }
    for(int k=0;k<lnth;k++)
    {
         cout<<slct;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}