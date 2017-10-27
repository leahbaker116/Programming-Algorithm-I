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

int total_phones = num_dumb + num_smart;

    if (total_phones <= 2 && num_tablet <=2 && data_used <= 2 ){
        cout<<"ATT 1 GB Family Plan or Sprint 2GB Plan"<<endl;
    };
    if (total_phones <= 3 && num_tablet <= 3 && data_used <= 3){
        cout<<"ATT 3GB Family Plan"<<endl;
    };
    if (total_phones <= 3 && num_tablet <= 3 && data_used <= 6){
        cout<<"ATT 6GB Family Plan"<<endl;
    };
    if (total_phones <= 3 && num_tablet <= 3 && data_used <= 10){
        cout<<"ATT Unlimited Plan, Choice for fastest data, Plus for slower data"<<endl;
    };
   
}

