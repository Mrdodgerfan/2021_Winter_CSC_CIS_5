/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 17, 2021, 12:36 PM
 * Purpose:  Rock Paper Scissors
 */

//System Libraries
#include <string> 
#include <iostream>  //Input/Output Library
#include <iomanip>
   // For name
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Set the random number seed
    
    //Declare Variables
    string r="r",
           R="R",
           s="s",
           S="S",
           p="p",
           P="P",
           plyr1,
           plyr2;
   
   
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>plyr1;
    cin>>plyr2;
   
   
       //Map inputs -> outputs
       
       
       if (plyr1==r || plyr1==R) {
           if(plyr2==p || plyr2==P) {
           cout<<"Paper covers rock.";
       }else if(plyr2==s ||plyr2==S) {
           cout<<"Rock breaks scissors.";
      }else if (plyr1==r && plyr2==R) {
       cout<<"Nobody Wins";
      }
      }else if (plyr1==p || plyr1==P) {
       if (plyr2==r || plyr2==R) {
           cout<<"Paper covers rock.";
       }else if (plyr2==s ||plyr2==S) {
            cout<< "Scissors cuts paper.";
         }else  if(plyr1==P && plyr2==p) {
           cout<< "Nobody wins";
         }
       }else if (plyr1==s || plyr1==S) {
             if(plyr2==p || plyr2==P) {
           cout<<"Scissors cuts paper.";
       }else if  (plyr2==r || plyr2==R) {
            cout<<"Rock breaks scissors.";
           }else if(plyr1==s && plyr2==S) {
           cout<<"Nobody wins";
           }
       }
       
     
    //Display the outputs

    //Exit stage right or left!
    return 0;
}