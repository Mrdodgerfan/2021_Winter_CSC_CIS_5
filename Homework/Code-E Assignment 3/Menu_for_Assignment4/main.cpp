/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 19, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float lit2gal= 0.264179f;
const float CNVL2G= 0.264179f;
//Function Prototypes
float MPGcomp(int,float,float);
float convrt1(float lit2gal1, float gal2lit1, float mpg1, int mil1);
float convrt2(float lit2gal2, float gal2lit2, float mpg2, int mil2);
int fuel(float mpg1, float mpg2);
float future(float pstpri, float inrte);
float inflate(float crntpri, float pstpri);

//Execution Begins Here!
int main(int argc, char** argv){
    //Variable Declarations
    char choice;
    int lnth;
    char slct;
    float lit2gal1,
          lit2gal2,
          gal2lit1,
          gal2lit2,
          mpg1,
          mpg2;
    int   mil1,
          mil2;
    char  run;
     float crntpri,
          pstpri,
          inrte,
          inflt;
   

    //Display Menu
    cout<<"Menu for Homework Assignment 4"<<endl;
    cout<<"Type 1 for Gaddis Sum Problem"<<endl;
    cout<<"Type 2 for Gaddis Pay In Pennies Problem"<<endl;
    cout<<"Type 3 for Gaddis Minimum Maximum Problem"<<endl;
    cout<<"Type 4 for Gaddis Rectangle Problem"<<endl;
    cout<<"Type 5 for Gaddis Pattern Problem"<<endl;
    cout<<"Type 6 for Savitch Litters to MPG Problem"<<endl;
    cout<<"Type 7 for Savitch Litters to MPG for two cars Problem"<<endl;
    cout<<"Type 8 for Savitch Inflation Problem"<<endl;
    cout<<"Type 9 for Savitch Inflation two years Problem"<<endl;
    cout<<"Type 10 for Savitch Max Parameter Problem"<<endl;

    cin>>choice;
    
    switch(choice){
        case'1':
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
            break;
    case'2':
    //Declare Variables
     unsigned short  wrkDay;
    //Initialize or input i.e. set variable values
    cin>>wrkDay;
    //Display the outputs
    cout<<setprecision(2)<<fixed;    
    cout<<"Pay = $"<<(pow(2,wrkDay)-1)/100.0f;
            //Exit stage right!
            break;
    case'3':
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
            //Exit stage right!
            break;
        
case'4':
     //Declare Variables
   
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
    //Exit stage right!
            break;
    case'5':           
    int rows;
    //Initialize or input i.e. set variable values
    cin>>rows;
    //Map inputs -> outputs
    for (int i=1; i<= rows; ++i) {
        for(int j = 1; j <=i; ++j){
            cout<<"+";
        }
        cout<<"\n\n";
    }
    for(int i= rows; i>=2;--i){
        for(int j=1; j<=i; ++j){
        cout<<"+";
        }
        cout<<"\n\n";
    }
    cout<<"+";
       //Exit stage right!
        break;
        case'6':
     //Declare Variables
    unsigned short liter,
                   miles;
                   float mpg,
                         gal;
                         char run;

    //Initialize or input i.e. set variable values
do
  {  cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>liter;
    cout<<endl;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>miles;
    cout<<endl;
    

    
        
    //Map inputs -> outputs
        gal=liter*lit2gal;
        cout<<"miles per gallon:"<<endl;
        cout<<fixed<<setprecision(2);
        cout<<MPGcomp(miles,gal,mpg)<<endl;
        cout<<"Again:"<<endl;
        
        cin>>run;
        if(run=='y'){
            cout<<endl;
        }
    }while(run == 'y');
    //Display the outputs
    //Exit stage right or left
    
    
}

float MPGcomp(int miles, float gal, float mpg)
{
    
    mpg=miles/gal;
    return mpg;
}
    //Initialize or input i.e. set variable values
    
    break;
        case'7':
            //Declare Variable Data Types and Constants
   do 
    {
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit2gal1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mil1;
        
        mpg1=convrt1(lit2gal1,gal2lit1,mpg1,mil1);
        
        cout<<"miles per gallon: ";
        cout<<fixed<<setprecision(2)<<mpg1<<endl;
        cout<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit2gal2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>mil2;
        
        mpg2=convrt2(lit2gal2,gal2lit2,mpg2,mil2);
        
        cout<<"miles per gallon: ";
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
            break;
        case'8':
            //Declare Variables
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
    break;
    
        case'9':
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
        // 1 year after
        pstpri=future(pstpri,inrte);
        cout<<"Price in one year: $"<<pstpri<<endl;
        // 2nd year after
        pstpri=future(pstpri,inrte);
        cout<<"Price in two year: $"<<pstpri<<endl;
        cout<<endl;
        // Run again
        cout<<"Again:"<<endl;
        cin>>run;
        if(run=='y'){
            cout<<endl;
        }
    }while(run=='y');

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
    break;
    
        case'10':
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
    
            break;
            
    default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case
    //Clean Up
    
    //Exit stage right!
    return 0;
}