/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 17, 2021, 12:36 PM
 * Purpose:  Sortnames
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    // For name
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   string n1, // First name user inputs
          n2, // Second name user inputs
          n3; // Third name user inputs
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout << "Input 3 names"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
   
    //Map inputs -> outputs
    if (n1 <= n2 && n1 <= n3 && n2 <= n3) {
        cout << n1 <<endl;
        cout << n2 <<endl;
        cout<< n3;
    } else if (n1 <= n2 && n1 <= n3 && n3 <= n2) {
        cout << n1 <<endl;
        cout<< n3 <<endl;
        cout<< n2;
    } else if (n2 <= n1 && n2 <= n3 && n1 <= n3) {
        cout << n2 <<endl;
        cout<< n1 <<endl;
        cout<< n3;
    } else if (n2 <= n1 && n2 <= n3 && n3 <= n1) {
        cout << n2 <<endl;
        cout<< n3 <<endl;
        cout<< n1;
    } else if (n3 <= n1 && n3 <= n2 && n1 <= n2) {
        cout << n3 <<endl;
        cout<< n1 <<endl;
        cout<< n2;
    } else {
        cout << n3 <<endl;
        cout<< n2 <<endl;
        cout<< n1;
    }

    //Display the outputs

    //Exit stage right or left!
    return 0;
}