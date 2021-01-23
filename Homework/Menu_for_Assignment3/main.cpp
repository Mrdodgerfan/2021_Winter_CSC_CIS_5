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
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees
string n1, // First name user inputs
          n2, // Second name user inputs
          n3; // Third name user inputs
string rn1,  // First runner user inputs
          rn2,  // Second runner user inputs
          rn3;  // Third runner user inputs
string package;
string r="r",
           R="R",
           s="s",
           S="S",
           p="p",
           P="P",
           plyr1,
           plyr2;
string      zdk1,
            zdk2;
bool x,y;//Boolean statements represented in the Table


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis Sort Names Problem"<<endl;
    cout<<"Type 2 for Gaddis Books Problem"<<endl;
    cout<<"Type 3 for Gaddis Bank Charges Problem"<<endl;
    cout<<"Type 4 for Gaddis Race Problem"<<endl;
    cout<<"Type 5 for Gaddis ISP Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savitch Roman Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Compatible Signs Problem"<<endl;
    cout<<"Type 9 for Truth Table Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case'1':
              //Declare Variables
   
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
    //Exit stage right or left!
            break;
    case'2':
    //Declare Variables
    unsigned int bookpc, // Books Purchased
                 pnts; // Points earned
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bookpc;
    //Map inputs -> outputs
    switch (bookpc){
        case 0:pnts=0;break;
        case 1:pnts=5;break;
        case 2:pnts=15;break;
        case 3:pnts=30;break;
        case 4:pnts=60;break;
        default:pnts=60;
    }
    
    //Display the outputs
   
     cout<<"Books purchased = "<<setw(2)<< fixed<< setprecision(0)<<bookpc<<endl;
     cout<<"Points earned   = "<<setw(2)<< fixed<< setprecision(0)<<pnts;  
            //Exit stage right!
            break;
    case'3':
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
            //Exit stage right!
            break;
        
case'4':
     //Declare Variables
   
    float rn1t, // First runners time user inputs
          rn2t, // Second runners time user inputs
          rn3t; // Third runners time user inputs
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout << "Input 3 Runners"<<endl;
    cout << "Their names, then their times"<<endl;
    cin>>rn1,
    cin>>rn1t;
    cin>>rn2,
    cin>>rn2t;
    cin>>rn3,
    cin>>rn3t;
   
    //Map inputs -> outputs
    if (rn1t <= rn2t && rn1t <= rn3t && rn2t <= rn3t) {
        cout << rn1 <<"\t"<<setw(3)<<rn1t <<endl;
        cout << rn2 <<"\t"<<setw(3)<< rn2t <<endl;
        cout<< rn3 <<"\t"<<setw(3)<<rn3t;
    } else if (rn1t <= rn2t && rn1t <= rn3t && rn3t <= rn2t) {
        cout<< rn1 <<"\t"<<setw(3)<<rn1t <<endl;
        cout<< rn3 <<"\t"<<setw(3)<< rn3t <<endl;
        cout<< rn2 <<"\t"<<setw(3)<<rn2t;
    } else if (rn2t <= rn1t && rn2t <= rn3t && rn1t <= rn3t) {
        cout<< rn2 <<"\t"<<setw(3)<<rn2t <<endl;
        cout<< rn1 <<"\t"<<setw(3)<<rn1t <<endl;
        cout<< rn3 <<"\t"<<setw(3)<< rn3t;
    } else if (rn2t <= rn1t && rn2t <= rn3t && rn3t <= rn1t) {
        cout<< rn2 <<"\t"<<setw(3)<< rn2t <<endl;
        cout<< rn3 <<"\t"<<setw(3)<< rn3t<<endl;
        cout<< rn1 <<"\t"<<setw(3)<< rn1t;
    } else if (rn3t <= rn1t && rn3t <= rn2t && rn1t <= rn2t) {
        cout<< rn3 <<"\t"<<setw(3)<<rn3t<<endl;
        cout<< rn1 <<"\t"<<setw(3)<<rn1t <<endl;
        cout<< rn2 <<"\t"<<setw(3)<<rn2t;
    } else {
        cout<< rn3 <<"\t"<<setw(3)<< rn3t <<endl;
        cout<< rn2 <<"\t"<<setw(3)<< rn2t <<endl;
        cout<< rn1<<"\t"<<setw(3)<<rn1t;
    }

    //Exit stage right!
            break;
    case'5':           
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
                
                //Exit stage right!
            break;
        case'6':
    
   
   
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>plyr1;
    cin>>plyr2;
   
   
       //Map inputs -> outputs
       
       
       if (plyr1==r || plyr1==R) {
           if(plyr2==p || plyr2==P) {
           cout <<"Paper covers rock.";
       }else if(plyr2==s ||plyr2==S) {
           cout<<"Rock breaks scissors.";
      }else if (plyr1==r && plyr2==R) {
       cout<<"Nobody Wins";
      }
      }else if (plyr1==p || plyr1==P) {
       if (plyr2==r || plyr2==R) {
           cout<<"Paper covers rock.";
       }else if (plyr2==s ||plyr2==S) {
            cout << "Scissors cuts paper.";
         }else  if(plyr1==P && plyr2==p) {
           cout << "Nobody wins";
         }
       }else if (plyr1==s || plyr1==S) {
             if(plyr2==p || plyr2==P) {
           cout<<"Scissors cuts paper.";
       }else if  (plyr2==r || plyr2==R) {
            cout <<"Rock breaks scissors.";
           }else if(plyr1==s && plyr2==S) {
           cout<<"Nobody wins";
           }
       }
    break;
        case'7':
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
            break;
        case'8':
            //Declare Variables
    
    
    int         horo1,  //horoscope entry 1
                horo2;  //horoscope entry 2
             
   
             
    
    //Initialize Variables
    
     
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    
    cin>>zdk1;
    
    cin>>zdk2;
    
            if(zdk1=="Aries")horo1=1;
            if(zdk1=="Leo")horo1=2;
            if(zdk1=="Sagittarius")horo1=3;
            if(zdk1=="Taurus")horo1=4;
            if(zdk1=="Virgo")horo1=5;
            if(zdk1=="Capricorn")horo1=6;
            if(zdk1=="Gemini")horo1=7;
            if(zdk1=="Libra")horo1=8;
            if(zdk1=="Aquarius")horo1=9;
            if(zdk1=="Cancer")horo1=10;   
            if(zdk1=="Scorpio")horo1=11;    
            if(zdk1=="Pisces")horo1=12;
    
            if(zdk2=="Aries")horo2=1;
            if(zdk2=="Leo")horo2=2;
            if(zdk2=="Sagittarius")horo2=3;
            if(zdk2=="Taurus")horo2=4;
            if(zdk2=="Virgo")horo2=5;
            if(zdk2=="Capricorn")horo2=6;
            if(zdk2=="Gemini")horo2=7;
            if(zdk2=="Libra")horo2=8;
            if(zdk2=="Aquarius")horo2=9;
            if(zdk2=="Cancer")horo2=10;   
            if(zdk2=="Scorpio")horo2=11;    
            if(zdk2=="Pisces")horo2=12;
     

    
    if (horo1>=1&&horo1<=3)
    {
    {   if(horo2>=1&&horo2<=3)
            cout<<zdk1<<" and "<<zdk2<<" are compatible Fire signs.";
    }    
    }
    
    else if (horo1>=4&&horo1<=6)
    {
    {    if(horo2>=4&&horo2<=6)
            cout<<zdk1<<" and "<<zdk2<<" are compatible Earth signs.";
    }
         
    }
    else if (horo1>=7&&horo1<=9)
    {
    {    if(horo2>=7&&horo2<=9)
            cout<<zdk1<<" and "<<zdk2<<" are compatible Air signs.";
    }
    } 
    else if (horo1>=10&&horo1<=12)
    {
    {    if(horo2>=10&&horo2<=12)
            cout<<zdk1<<" and "<<zdk2<<" are compatible Water signs.";
    }
    }
    
  
    else cout<<zdk1<<" and "<<zdk2<<" are not compatible signs.";
    break;
    
        case'9':
            //System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here

    
    
    //Initialize Variables
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //1st Row of the Truth Table
    x=y=true;
    cout<<(x?'T':'F')<<setw(2);
    cout<<(y?'T':'F')<<setw(3);
    cout<<(!x?'T':'F')<<setw(3);
    cout<<(!y?'T':'F')<<setw(4);
    cout<<(x&&y?'T':'F')<<setw(4);
    
    cout<<(x||y?'T':'F')<<setw(5);
    cout<<(x^y?'T':'F')<<setw(5);
    cout<<(x^y^x?'T':'F')<<setw(7);
    cout<<(x^y^y?'T':'F')<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<setw(7);
    
    cout<<(!x||!y?'T':'F')<<setw(7);
    cout<<(!(x||y)?'T':'F')<<setw(7);
    cout<<(!x&&y?'T':'F');
    cout<<endl;
    
    //2nd Row of the Truth Table
    y=false;
    cout<<(x?'T':'F')<<setw(2);
    cout<<(y?'T':'F')<<setw(3);
    cout<<(!x?'T':'F')<<setw(3);
    cout<<(!y?'T':'F')<<setw(4);
    cout<<(x&&y?'T':'F')<<setw(4);
    
    cout<<(x||y?'T':'F')<<setw(5);
    cout<<(x^y?'T':'F')<<setw(5);
    cout<<(x^y^x?'T':'F')<<setw(7);
    cout<<(x^y^y?'T':'F')<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<setw(7);
    
    cout<<(!x||!y?'T':'F')<<setw(7);
    cout<<(!(x||y)?'T':'F')<<setw(7);
    cout<<(!x&&y?'T':'F');
    cout<<endl;

    
    //3rd Row of the Truth Table
    y=true, x=false;
    cout<<(x?'T':'F')<<setw(2);
    cout<<(y?'T':'F')<<setw(3);
    cout<<(!x?'T':'F')<<setw(3);
    cout<<(!y?'T':'F')<<setw(4);
    cout<<(x&&y?'T':'F')<<setw(4);
    
    cout<<(x||y?'T':'F')<<setw(5);
    cout<<(x^y?'T':'F')<<setw(5);
    cout<<(x^y^x?'T':'F')<<setw(7);
    cout<<(x^y^y?'T':'F')<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<setw(7);
    
    cout<<(!x||!y?'T':'F')<<setw(7);
    cout<<(!(x||y)?'T':'F')<<setw(7);
    cout<<(!x&&y?'T':'F');
    cout<<endl;

    
    //4th Row of the Truth Table
    y=x=false;
    cout<<(x?'T':'F')<<setw(2);
    cout<<(y?'T':'F')<<setw(3);
    cout<<(!x?'T':'F')<<setw(3);
    cout<<(!y?'T':'F')<<setw(4);
    cout<<(x&&y?'T':'F')<<setw(4);
    
    cout<<(x||y?'T':'F')<<setw(5);
    cout<<(x^y?'T':'F')<<setw(5);
    cout<<(x^y^x?'T':'F')<<setw(7);
    cout<<(x^y^y?'T':'F')<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<setw(7);
    
    cout<<(!x||!y?'T':'F')<<setw(7);
    cout<<(!(x||y)?'T':'F')<<setw(7);
    cout<<(!x&&y?'T':'F');
    cout<<endl;
    break;
            
    default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case
    //Clean Up
    
    //Exit stage right!
    return 0;
}