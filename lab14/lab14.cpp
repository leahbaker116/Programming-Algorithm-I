#include <iostream>
using namespace std;

int main() {
    int pennies = 1; //Actual amount coins are worth 
    int nickles = 5;
    int dimes = 10;
    int quarters = 25;
    
    int numQuarters = 0; //Declaring these so program can give a run down of how many of each coin there is 
    int numDimes = 0;
    int numNickles = 0;
    int numPennies = 0;
    
    int totalAmount = 0; //This will be the amount in cents the program does it's calculations on 

    cout<<"Enter Amount in cents: "; //User inputs amount in cents 
    cin>>totalAmount;
    double fee = totalAmount * .00109; //This will find the fee that will be charged by the machine 
    double grandTotal = totalAmount/100.00 - fee; //This is the total given to the user after the fee is taken 
    
    numQuarters = (totalAmount / quarters); //Divides total amount by 25 to get # of quarters 
    
    numDimes = (totalAmount - (numQuarters * 25)) / dimes % dimes; //Total amount minus # of quarters, % (mod) dimes to get remainder 
    
    numNickles = (totalAmount - (numDimes * 10)) / nickles % nickles; //Total amount miuns # of dimes, % (mod) nickles to get remainder  
    
    numPennies = (totalAmount - (numNickles * 5)) / pennies  % pennies; //Total amount minus # of nickles, % (mod) pennies to get remainder 
    
    cout<< "You have entered: " << totalAmount << endl; // Outputs user input 
    cout<< "That is: " << numQuarters<<" Quarters "<<numDimes<<" dimes "  
    <<numNickles<<" nickles and "<<numPennies<<" pennies."<<endl; // Shows breakdown of number of each coin
    
    cout<< "Your fee is $" <<fee<< " so your grand total is $" <<grandTotal<< endl; // This shows what the fee is, then gives the total after fee is subtracted
    
    
    
    
}