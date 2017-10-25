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
    
    void SetTempFromCelsius(double Celsius){ //Accepts a Celsius value and converts it to Kelvin
        Kelvin = Celsius + 273.15; //Makes Celsuis into Kelvin to be stored
    }
    
    void SetTempFromFahrenheit(double Fahrenheit) {
        _kelvin = ((5 * (Fahrenheit -32)/9) + 273.15);
    }
    
    double GetTempAsCelsius() {
        double Celsius = (Kelvin- 273.15);
        return Celsius;
    }
    
    double GetTempAsFahrenheit(){
        double Fahrenheit = (((GetTempAsCelsius()*9)/5 + 32));
        return Fahrenheit;
    }
    
    void PrintTemperatures() {
        cout<<"Temp K: "<<Kelvin<<endl;
        cout<<"Temp C: "<<GetTempAsCelsius()<<endl;
        cout<<"Temp F: "<<GetTempAsFahrenheit()<<endl;
        
    }
        
    
    private:
        double Kelvin;
};