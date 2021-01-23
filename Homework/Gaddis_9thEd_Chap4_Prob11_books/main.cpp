/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 17, 2021, 12:36 PM
 * Purpose:  Books
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    unsigned int bookpc, // Books Prchased
                 pnts; // Points earned
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bookpc;
    //Map inputs -> outputs
    switch (bookpc){
        case 0:pnts=0;break;
        case 1:pnts=5;break;
        case 2:pnts=15;break;
        case 3:pnts=30;break;
        case 4:pnts=60;break;
        default:pnts=60;
    }
    
    //Display the outputs
   
     cout<<"Books purchased = "<<setw(2)<< fixed<< setprecision(0)<<bookpc<<endl;
     cout<<"Points earned   = "<<setw(2)<< fixed<< setprecision(0)<<pnts;  
    
    //Exit stage right or left!
    return 0;
}