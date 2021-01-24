/* 
 * File:   
 * Author: Francisco Rodriguez
 * Created on 01/22/2021
 * Purpose:  Two cars MPG
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVL2G= 0.264179f;
//Function Prototypes
float convrt1(float lit2gal1, float gal2lit1, float mpg1, int mil1);
float convrt2(float lit2gal2, float gal2lit2, float mpg2, int mil2);
int fuel(float mpg1, float mpg2);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float lit2gal1,
          lit2gal2,
          gal2lit1,
          gal2lit2,
          mpg1,
          mpg2;
    int   mil1,
          mil2;
    char  run;
    //Initialize or input i.e. set variable values
    do 
    {
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit2gal1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mil1;
        
        mpg1=convrt1(lit2gal1,gal2lit1,mpg1,mil1);
        
        cout<<"miles  per gallon: ";
        cout<<fixed<<setprecision(2)<<mpg1<<endl;
        cout<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit2gal2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mil2;
        
        mpg2=convrt2(lit2gal2,gal2lit2,mpg2,mil2);
        
        cout<<"miles  per gallon: ";
        cout<<fixed<<setprecision(2)<<mpg2<<endl;
        cout<<endl;
        
    
    //Map inputs -> outputs
    fuel(mpg1,mpg2);
    cout<<"Again:"<<endl;
    cin>>run;
    if(run=='y'){
        cout<<endl;
    }
}while(run=='y');
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
int fuel(float mpg1, float mpg2){
    if(mpg1>mpg2){
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
    if(mpg1<mpg2){
         cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
}

float convrt1(float lit2gal1, float gal2lit1, float mpg1, int mil1){
gal2lit1= lit2gal1*CNVL2G;
mpg1= mil1/gal2lit1;
return mpg1;
    }
    float convrt2(float lit2gal2, float gal2lit2, float mpg2, int mil2){
gal2lit2=lit2gal2*CNVL2G;
mpg2=mil2/gal2lit2;
return mpg2;
    }
