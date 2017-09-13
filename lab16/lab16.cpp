/* 
Leah Baker
CSCI 20
Objects - Stock Portfolio 
Date - September 12th 2017
 
 This program will take an user input on stock value and output the total value
 of the stock depending on the values inputed. 
 
 */

#include <iostream>
#include <string>
using namespace std;

struct Stock{  //Here's my struct for each stock
  string name;
  char sector;
  double price;
  int number;
};

int main () {

int totalValue; //Declared this varible to get the final value of the stock 

    Stock StockA;
        StockA.name = "WFC";  //Here's where I set up my objects with default values 
        StockA.sector = 'F';
        StockA.price = 53.02;
        StockA.number = 1368;
    
    Stock StockB;
        StockB.name = "Albertson";
        StockB.sector = 'C';
        StockB.price = 34.39;
        StockB.number = 542;
    
    Stock StockC;
        StockC.name = "AAPL";
        StockC.sector = 'T';
        StockC.price = 145.91;
        StockC.number = 5;
    
    Stock StockD;
        StockD.name = "TSLA";
        StockD.sector = 'A';
        StockD.price = 375.64;
        StockD.number = 50;


    //Stock A
    
    cout<<"Enter Stock Information"<<endl; //This is where user input is taken, this will happen 4 times for A,B,C,D
    
    cout<<"Name: ";
        cin>>StockA.name;
    
    cout<<"Sector (single letter): ";
        cin>>StockA.sector;
    
    cout<<"Number of Shares: ";
        cin>>StockA.number;
    
    cout<<"Current Value Per Share: ";
        cin>>StockA.price;
        
     totalValue = (StockA.price * StockA.number); //This equation calculates total value and is on every object
     
  
    cout<<"Total Value: $"<<totalValue<<endl;
    
    //Stock B
    
    cout<<"Enter Stock Information"<<endl;
        
    cout<<"Name: ";
        cin>>StockB.name;
    
    cout<<"Sector (single letter): ";
        cin>>StockB.sector;
    
    cout<<"Number of Shares: ";
        cin>>StockB.number;
    
    cout<<"Current Value Per Share: ";
        cin>>StockB.price;
    
     totalValue = (StockB.price * StockB.number);
     

    cout<<"Total Value: $"<<totalValue<<endl;
    
        
    //Stock C
    
    cout<<"Enter Stock Information"<<endl;
        
    cout<<"Name: ";
        cin>>StockC.name;
    
    cout<<"Sector (single letter): ";
        cin>>StockC.sector;
    
    cout<<"Number of Shares: ";
        cin>>StockC.number;
    
    cout<<"Current Value Per Share: ";
        cin>>StockC.price;
        
     totalValue = (StockC.price * StockC.number);
     
     
    cout<<"Total Value: $"<<totalValue<<endl;
        
    
    //Stock D
    
    cout<<"Enter Stock Information"<<endl;
    
    cout<<"Name: ";
        cin>>StockD.name;
    
    cout<<"Sector (single letter): ";
        cin>>StockD.sector;
    
    cout<<"Number of Shares: ";
        cin>>StockD.number;
    
    cout<<"Current Value Per Share: ";
        cin>>StockD.price;
    
    totalValue = (StockD.price * StockD.number);
    
    cout<<"Total Value: $"<<totalValue<<endl;
    
}