/* 
 * File:   
 * Author: Francisco Rodriguez
 * Created on 01/23/2021
 * Purpose:  Find Max
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    float num1, num2, num3;
   
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Enter first number:\n"<<endl;
    cin>>num1;
    
    cout<<"Enter Second number:\n"<<endl;
    cin>>num2;
    
    cout<<"Enter third number:\n"<<endl;
    cin>>num3;
    
    if (num1>num2){    
       cout<<"Largest number from two parameter function:\n"<<num1<<endl<<endl;
    }
    else if (num2>num1){    
       cout<<"Largest number from two parameter function:\n"<<num2<<endl<<endl;
    }
    
    
        if (num1>num2 && num1>num3){    
       cout<<"Largest number from three parameter function:\n"<<num1<<endl;
    }
    else if (num2>num1 && num2>num3){    
       cout<<"Largest number from three parameter function:\n"<<num2<<endl;
    }
    else if (num3>num1 && num3>num2){
      cout<<"Largest number from three parameter function:\n"<<num3<<endl;
    }
    

    //Exit stage right or left!
    return 0;
}
