/*
Leah Baker
Health Calculator
September 14th 2017 

This program will allow a user to enter some basic information about themsleves
and the program will then output a "reciept" that will tell them about thier
health stats. */

#include <iostream>
#include <string>
using namespace std;

struct person{  //This is where I set up the person struct for user entered attributtes
    string firstName;
    string lastName;
    int ageMonths;
    double bodyWeight;
    double heightCm;
};

int main () {
    
    person personA;
    
    cout<<"Enter the following Information: "<<endl; //User Input 
    cout<<"Your First Name: ";
    cin>>personA.firstName;
    cout<<"Your Last Name: ";
    cin>>personA.lastName;
    cout<<"Your Age in Months: ";
    cin>>personA.ageMonths;
    cout<<"Your Body Weight (kilograms): ";
    cin>>personA.bodyWeight;
    cout<<"Your Height in Centimeters: ";
    cin>>personA.heightCm;
  
    //This is where I'm delaring the variables 
    double heightM = (personA.heightCm / 100); //I need a conversion to meters for BMI calculation 
    double bmi = personA.bodyWeight / (heightM*heightM); //calculation for BMI
    int ageYears = (personA.ageMonths / 12); //This will give me age in years 
    double mifflinFormula = (10 * personA.bodyWeight) + (6.25 * personA.heightCm) - (5 * ageYears) + 5;  //these are two different equations to find what ideal daily calorie intake is
    double harrisFormula = (655.1 + (9.563 * personA.bodyWeight) + (1.850 * personA.heightCm) - (4.676 * ageYears));
    double calorieAverage = (harrisFormula+mifflinFormula)/2; //This will take the average of those two formulas
    
    double watermelonMifflin = (mifflinFormula / 1370); //These two tell you how many watermelons you could eat each day
    double watermelonHarris = (harrisFormula / 1370);
    
    cout<<"Name: "<<personA.firstName<<" "<<personA.lastName<<endl;
    cout<<"Age: "<<ageYears<<endl;
    cout<<"Weight Kg: "<<personA.bodyWeight<<endl;
    cout<<"Height Cm: "<<personA.heightCm<<endl;
    cout<<"BMI (body mass index): "<<bmi<<endl;
    cout<<"You Should eat "<<mifflinFormula<<" calories a day based on the more current Mifflin St Jeor Equation to maintain your body weight."<<endl;
    cout<<"Or "<<harrisFormula<<" calories a day based on the older Harris Benedict Formula."<<endl;
    cout<<"The average of those two is: "<<calorieAverage<<"."<<endl;
    cout<<"You could eat "<<watermelonMifflin<<" whole watermelons acorrding to the Mifflin St Jeor Equation each day."<<endl;
    cout<<"Or you could eat "<<watermelonHarris<<" whole watermelons according to the Harris Benedict Formula."<<endl;
}



