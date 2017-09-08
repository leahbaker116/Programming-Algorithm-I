/*
Leah Baker
September 7th 2017
CSCI 20 - Madlibs lab 
This program will prompt the user to input a word depending on the type needed
(adjective, noun, person, etc). It will then output a paragraph with the blanks
filled in with the user input.
*/ 


#include <iostream>
#include <string>
using namespace std;

int main() {
 string adjective1; //Declaring my varables that will be filled in by the user 
 string noun1;
 string pluralNoun;
 string person;
 string adjective2;
 string clothing;
 string noun2;
 string city;
 
 cout<<"Enter the Following, Please Don't use Spaces"<<endl; //Gives user instructions
 
 cout<<"Adjective: "<<endl; //This is where the program will acutally ask for input one after another
 cin>> adjective1;
 
 cout<<"Noun: "<<endl; 
 cin>> noun1;
 
 cout<<"Plural Noun: "<<endl;
 cin>> pluralNoun;
 
 cout<<"Person in Room: "<<endl;
 cin>> person;
 
 cout<<"Adjective: "<<endl;
 cin>>adjective2;
 
 cout<<"Article of Clothing: "<<endl;
 cin>>clothing;
 
 cout<<"Noun: "<<endl;
 cin>>noun2;
 
 cout<<"City: "<<endl;
 cin>>city;
    
    
 cout<<"There are many "<<adjective1<<" ways to choose a/an "<<noun1<< //The paragraph with user input inserted
 " to read. First you could ask for recommendations from your friends and "<<
 pluralNoun<<". Just don't ask Aunt "<<person<<" she only reads "<<adjective2<<
 " books with "<<clothing<<"-ripping godesses on the cover. If your friends and "
 "family are no help, try checking out the "<<noun2<<" Review in "
 " the "<<city<< " times."<<endl;
    
    
    
    
    
    
    
}