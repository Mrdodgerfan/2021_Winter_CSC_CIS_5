/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 22, 2022, 12:36 PM
 * Purpose:  Min Max
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
int main(int argc, char** argv){
    //Set the random number seed
    
    //Declare Variables
    const int stpin=-99;
          int num,
              min,
              max;
    
    //Initialize or input i.e. set variable values
          cin>>num;
          min=max=num;
    //Map inputs -> outputs
    
     while(num!=-99)
    {
        if(num<min)
        min=num;
        if(num>max)
        max=num;
        cin>>num;
    }
        
        cout<<"Smallest number in the series is "<<min<<endl;
        cout<<"Largest  number in the series is "<<max;
        
    
    
    //Display the outputs
   
   //cout << "Average = " << (1.0*sum/count) <<endl;
    //Exit stage right or left!
    return 0;
}

    
