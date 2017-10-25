/*
Leah Baker 
10/24/2017
CSCI 20, Lab 3.5

This program will convert tempuratures between Kelvin, Fahrenheit and Celsius. 
It will store the values in Kelvin. The main function is located in the 
file main.cpp  */

#include <iostream>
using namespace std;

class TemperatureConverter{ //This class holds all the temperature conversions 
    public:
TemperatureConverter(){ //This is the deafault constructor 
    SetTempFromKelvin (0);
}
TemperatureConverter (double Kelvin){ //This is the overloaded constructor 
    SetTempFromKelvin (Kelvin);
}

    void SetTempFromKelvin(double kelvin_){ //Accepts and stores the kelvin_ value 
        kelvin_ = Kelvin ;
    }
    
   double GetTempFromKelvin(){ //Returns the Kelvin value
        return Kelvin;
    }
    
    void SetTempFromCelsius(double Celsius){ //Accepts a Celsius value 
        Kelvin = Celsius + 273.15; //Celsuis to Kelvin 
    }
    
    void SetTempFromFahrenheit(double Fahrenheit) { //Accepts a Fahrenheit value 
        Kelvin = ((5 * (Fahrenheit -32)/9) + 273.15); //Fahrenheit to Kelvin
    }
    
    double GetTempAsCelsius() { //Returns the celsius value
        double Celsius = (Kelvin- 273.15); //Converts stored Kelvin to Celsuius
        return Celsius;
    }
    
    double GetTempAsFahrenheit(){ //Returns Fahrenheit value
        double Fahrenheit = (((GetTempAsCelsius()*9)/5 + 32)); //Converts Stored Celcius value to Fahrenheit
        return Fahrenheit;
    }
    
    void PrintTemperatures() { //This will print out the final stored value of all three temps
        cout<<"Temp K: "<<Kelvin<<endl; //Kelvin
        cout<<"Temp C: "<<GetTempAsCelsius()<<endl; //Celsuis
        cout<<"Temp F: "<<GetTempAsFahrenheit()<<endl; //Fahrenheit 
        
    }
        
    
    private:
        double Kelvin; //The only class variable 
};