#include <iostream>
using namespace std;

int main() {
  
  int currentPopulation = 325765736;
  int yearsFuture;
  int currentYear = 2017;
  int birthRate = (86400 / 8) * 365;
  int deathRate = (86400 / 12) * 365;
  int immigrationRate = (86400 / 33) * 365;
  
  
  cout<<"The Year is: "<<currentYear<<" The population is: "<<currentPopulation<< endl;
  cout<<"Enter years in the future: ";
  cin>> yearsFuture; 
  cout<<"Birth Rate "<<birthRate<< endl;
  cout<<"Death Rate "<<deathRate<< endl;
  cout<<"Immigration Rate "<<immigrationRate<< endl;
  int endPopulation = currentPopulation + ((birthRate + immigrationRate) - deathRate) * yearsFuture;
  cout<<"Result Population: "<<endPopulation;
  
 }