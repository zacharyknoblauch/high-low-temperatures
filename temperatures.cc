/*
*
*  Program: Temperatures.cc
*  Name: Zachary Knoblauch
*  Date: 12/February/2019
*  Description: User inputs high and low temperature data for each day; the program will compare all data and save teh highest high and the lowest low information. Using sentinel value -100, when the program is terminated, it will display the highest high value and the lowest low value that was given
*
*/


#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

double inputHigh = 0;//user inputs high for the day
double inputLow = 0; //user inputs low for the day
double highHigh = -1000000; //highest high so far
//didn't start at 0 because I wanted any value the user unputs to be assigned
double lowLow = 1000000; //lowest low so far
//didn't start at 0 because I wanted any value the user inputs to be assigned

int counter = 1; //counter to increment the days

  cout << "Enter high temperature for day 1: ";
  cin >> inputHigh;
  cout << "Enter low temperature for day 1: ";
  cin >> inputLow;
//user inputs the high and low values for day 1

while (inputHigh != -100 && inputLow != -100){ //starts the loop if both values are not -100

  ++counter; //increase counter because it's a new day
  
  if (inputHigh > highHigh){ 
    highHigh = inputHigh;
  }
//if input high is higher than the highest high, make the the highest high the value for input high

  if (inputLow < lowLow){
    lowLow = inputLow;
  }
//if input low is lower than the lowest low, make the lowest low the value for input low

  cout << "Enter high temperature for day " << counter << ": ";
  cin >> inputHigh;
  cout << "Enter low temperature for day " << counter << ": ";
  cin >> inputLow;
//enter high and low values for the next day

  if (inputHigh == -100 || inputLow == -100){ //exit function using sentinel value

    cout << "\nThe highest high so far is " << highHigh << " degrees." << endl;
    cout << "The lowest low so far is " << lowLow << " degrees." << endl;
//outputs the highest high value and the lowest low value
  }
}
  return 0;
}//main








