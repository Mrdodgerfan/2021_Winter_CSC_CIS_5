/* 
 * File:   main.cpp
 * Author: Francisco Rodriguez
 * Created on January 14, 2021, 11:50 PM
 * Purpose:  Cookies
 *           
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;


//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
                                    
    //Declare Variables
    const int COOKIES_PER_BAG       = 40,
              SERVINGS_PER_BAG      = 10,
              CALORIES_PER_SERVING  = 300;
    
   
    
    //Initialize Variables
    float cookies_eaten,
          servings_eaten,
          calories_consumed,
          cookies_per_serving;
          
   
    //Map Inputs to Outputs -> Process
    cout <<"Calorie Counter"<<endl;
    cout << "How many cookies did you eat?";
    cin >> cookies_eaten;
    cout << endl;
  
    // Calculate number of servings
    cookies_per_serving = COOKIES_PER_BAG / SERVINGS_PER_BAG;
    servings_eaten = cookies_eaten / cookies_per_serving;
   
    // Calculate calories consumed
    calories_consumed = servings_eaten * CALORIES_PER_SERVING;
    
    //Display Inputs/Outputs
    cout << "You consumed "<< calories_consumed<<" calories.";
   
    
    
            
    //Exit the Program - Cleanup
    return 0;
} 