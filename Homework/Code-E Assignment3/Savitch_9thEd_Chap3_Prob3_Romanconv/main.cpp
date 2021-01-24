/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 18, 2021, 11:10 AM
 * Purpose:  Arabic Number to Roman Numerals
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Declare Variable Data Types and Constants
    unsigned short n2Cnvrt;
    unsigned char  n1000,
                   n100,
                   n10,
                   n1;
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>n2Cnvrt;
    
    if(n2Cnvrt>=1000 && n2Cnvrt<=3000){
        cout<<n2Cnvrt<<" is equal to ";
    
        //Process or map Inputs to Outputs
        //Determine 1000's, 100's, 10's, 1's
       
        //n1000s=n2Cnvrt/1000;
            

        n1000=n2Cnvrt/1000;
        n100=n2Cnvrt%1000/100;
        n10=n2Cnvrt%100/10;
        n1=n2Cnvrt%10;
        
        //Output the number of 1000's in Roman Numerals
        
            cout<<(n1000==3?"MMM":
                   n1000==2?"MM":
                   n1000==1?"M":"");
        
        
        //Output the number of 100's
        cout<<(n100==9?"CM":
               n100==8?"DCCC":
               n100==7?"DCC":
               n100==6?"DC":
               n100==5?"D":
               n100==4?"CD":
               n100==3?"CCC":
               n100==2?"CC":
               n100==1?"C":"");
        
        //Output the number of 10's
       cout<<(n10==9?"XC":
        n10==8?"LXXX":
        n10==7?"LXX":
        n10==6?"LX":
        n10==5?"L":
        n10==4?"XL":
        n10==3?"XXX":
        n10==2?"XX":
        n10==1?"X":"");
        
        //Output the number of 1's
        cout<<(n1==9?"IX":
        n1==8?"VIII":
        n1==7?"VII":
        n1==6?"VI":
        n1==5?"V":
        n1==4?"IV":
        n1==3?"III":
        n1==2?"II":
        n1==1?"1":"");
    }else {
        
        cout<<n2Cnvrt<<" is Out of Range!";
    }

    //Exit stage right!
    return 0;
}