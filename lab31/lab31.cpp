/*
Leah Baker
October 10th 2017
CSCI 20 Lab 3.1 Conditions 

This program will allow a user to enter usage and number of users, it will
then tell them what data plan is best for them. 
*/

#include <iostream> 
using namespace std; 

int main () { 
    
int num_smart;
int num_dumb;
int num_tablet;
int data_used;

    
cout<<"To find the best phone plan for you enter your info below."<<endl;
    
    cout<<"Enter number of smart phones (uses data): ";
        cin>>num_smart;
    
    cout<<"Enter number of dumb phones (doesn't use data): ";
        cin>>num_dumb;
    
    cout<<"Enter number of tablets (that use data): ";
        cin>>num_tablet;
    
    cout<<"Enter estimated GB of data used per month : ";
        cin>>data_used;


   
    if (num_smart <= 1 && num_dumb <= 1 && num_tablet <= 1 && data_used <= 1){
        cout<<"ATT 1GB Family Plan";
    }
    if else (num_smart <=3 && num_dumb <=3 && num_tablet <= 3 && data_used <= 5){
        cout<<"ATT 6GB family Plan"
    }
    
    if else ()
}

