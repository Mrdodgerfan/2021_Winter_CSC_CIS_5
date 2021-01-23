/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 15, 2021, 12:36 PM
 * Purpose:  Diet Coke
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
const float CNVENGM=453.592; //LBS to Grams
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
     
    float
          whgtms=35,    // Weight of the mouse
          miceSwtn=5,   // Amount needed for mouse to die
          mssDC=350,     //Mass of 1 Diet Coke can
          cncnt8=0.001f, //Concentration of sweetener in a can
          whgtDtr;      // Weight of dieter
    int   cans;         // Number of cans
    //Initialize or input i.e. set variable values
         whgtDtr=rand()%(350-90+1)+90; // Range:90-350   
   
    //Map inputs -> outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>whgtDtr;
    cans=(miceSwtn*whgtDtr*CNVENGM)/(whgtms*mssDC*cncnt8);    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<cans<<" cans";
    
    //Exit stage right or left!
    return 0;
}