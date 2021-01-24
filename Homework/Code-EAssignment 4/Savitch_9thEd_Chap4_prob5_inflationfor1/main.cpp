/* 
 * File:   
 * Author: Francisco Rodriguez
 * Created on 01/23/2021
 * Purpose:  Inflation
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
float future(float pstpri, float inrte);
float inflate(float crntpri, float pstpri);
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float crntpri,
          pstpri,
          inrte,
          inflt;
    char  run;
    //Initialize or input i.e. set variable values
    do 
    {
        cout<<"Enter current price:"<<endl;
        cin>>crntpri;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pstpri;
        
        inrte=inflate(crntpri,pstpri);
        cout<<fixed;
        cout<<"Inflation rate: "<<setprecision(2)<<inrte<<"%"<<endl;
        cout<<endl;
        
        pstpri=crntpri;

        // Run again
        cout<<"Again:"<<endl;
        cin>>run;
        if(run=='y'){
            cout<<endl;
        }
    }while(run=='y');
     return 0;
        }
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
   

float inflate(float crntpri, float pstpri){
    float diffrnc,
          infl;
          // Calculating the rate of Inflation
          diffrnc=crntpri-pstpri;
          infl=(diffrnc/pstpri)*100.0f;
          return infl;
}
float future(float pstpri, float inrte) {
    inrte=inrte/100.0f;
    pstpri=pstpri+(pstpri*inrte);
}
