/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 17, 2021, 12:36 PM
 * Purpose: Internet Servvice Provider
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
#include <string>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    string package;
    //Declare Variables
   float Time;
  float price;
 cout << "ISP Bill"<<endl;
 cout << "Input Package and Hours"<<endl;
 cin >> package;
 cin >>Time;
    
    //Initialize or input i.e. set variable 
    // Package validation
 if ((package == "A") || (package == "B") || (package == "C")) {
 
 // Time validation
 if (Time <= 744) {
// Package A
if (package == "A") {
if (Time > 10) {
price = 9.95 + (Time - 10) * 2;
} else {
price = 9.95;
}
// Package B
} else if (package == "B") {
if (Time > 20) {
price = 14.95 + (Time - 20) * 1;
} else {
price = 14.95;
}
// Package C
} else {
price = 19.95;
}
 } else {
cout << "Invalid number of hours!";
 }
 } else {
 cout << "Invalid package!";
}
cout << "Bill = $ " << price;
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}