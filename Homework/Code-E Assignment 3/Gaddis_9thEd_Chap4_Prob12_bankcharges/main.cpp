/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 17, 2021, 12:36 PM
 * Purpose:  Bank Charges
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
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float begnbal,nmbrchk,mnFee,lwBln,nwBln,chckFee;
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>begnbal>>nmbrchk;
    //Map inputs -> outputs
    if(nmbrchk<0)
    {
        cout<<"Number of checks inputted is invalid.";
        
    }
        else if (nmbrchk>0)
        {
            if (begnbal<0)
            {
                cout<<"ACCOUNT IS OVERDRAWN.";
                
            }
                else if (begnbal>0)
                {
                    if (0<=nmbrchk&&nmbrchk<20)
                    chckFee=nmbrchk*0.10f;
                    if (20<=nmbrchk&&nmbrchk<=39)
                    chckFee=nmbrchk*0.08f;
                    if (40<=nmbrchk&&nmbrchk<=59)
                    chckFee=nmbrchk*0.06f;
                    if (nmbrchk>59)
                    chckFee=nmbrchk*0.04f;
                    
                    mnFee=10;
                    begnbal<400?lwBln=15.00:lwBln=0.00;
                    nwBln=begnbal-chckFee-mnFee-lwBln;

                
            
        
    
    //Display the outputs
cout<<fixed<<showpoint<<setprecision(2);
cout<<"Balance     $ "<<setw(8)<<begnbal<<endl;
cout<<"Check Fee   $ "<<setw(8)<<chckFee<<endl;
cout<<"Monthly Fee $ "<<setw(8)<<mnFee<<endl;
cout<<"Low Balance $ "<<setw(8)<<lwBln<<endl;
cout<<"New Balance $ "<<setw(8)<<nwBln;
}
}
    //Exit stage right or left!
    return 0;
}