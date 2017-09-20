/*
Leah Baker 
Lab 2.1 Wind Chill Calculator 
September 19th 2017 
CSCI 20 

This program will take a user input of tempature in fahrenheit and wind speed in 
MPH. It will then use two fromulas, and old and a new to give to results for the 
windchill based on their input. 
*/

#include <iostream>
#include <cmath> // Need to include math library to use functions
using namespace std;

int main () {  //Declaring my variables 
double windSpeed;
double tempature;
double oldWindChill; //declaing these now to keep track, the equations will be after user input
double newWindChill;
double difWindChill;
double avgWindChill;

cout<<"Enter the following information to find out what the wind chill is."<<endl; //user input is taken 
cout<<"Current Tempature in degrees fahrenheit: ";
cin>>tempature;
cout<<"Current wind speed in MPH: ";
cin>>windSpeed;

oldWindChill = 0.081 * (3.71 * (sqrt (windSpeed)) + 5.81 - 0.25 * windSpeed) * (tempature - 91.4) + 91.4; //The two equations for windchill 
newWindChill = 35.74 + 0.6215 * tempature - 35.75 * pow((windSpeed), 0.16) + 0.4275 * tempature;
difWindChill = oldWindChill - newWindChill;
avgWindChill = (oldWindChill + newWindChill) / 2;

cout<<"You entered "<<tempature<<" degrees fahrenheit. And a wind speed of "<<windSpeed<<"MPH"<<endl; //This repeats what was given
cout<<"In the old formula that gives a wind chill of "<<oldWindChill<<" and in the new formula a wind chill of "<<newWindChill<<endl;
cout<<"The difference between those wind chills is "<<difWindChill<<endl;
cout<<"And the avarge of the two is "<<avgWindChill<<endl;
  
  return 0;  
}

/* Here are my outputs: 

You entered 30 degrees fahrenheit. And a wind speed of 4MPH
In the old formula that gives a wind chill of 30.5753 and in the new formula a wind chill of 22.5822
The difference between those wind chills is 7.99314
And the avarge of the two is 26.5788


You entered 30 degrees fahrenheit. And a wind speed of 4MPH
In the old formula that gives a wind chill of 30.5753 and in the new formula a wind chill of 22.5822
The difference between those wind chills is 7.99314
And the avarge of the two is 26.5788

You entered 100 degrees fahrenheit. And a wind speed of 2MPH
In the old formula that gives a wind chill of 98.7538 and in the new formula a wind chill of 100.697
The difference between those wind chills is -1.94317
And the avarge of the two is 99.7254

*/
