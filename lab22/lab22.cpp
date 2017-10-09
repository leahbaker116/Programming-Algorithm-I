/* 
Leah Baker
October 9th 2017 
CSCI 20 Lab 2.2 Writing Functions

This program will give a user a random number, it won't take input it will simply
output a random numer when ran. */


#include <iostream> 
#include <cstdlib> 
#include <ctime> //This must be included to use time a random start point so the number will always change 
#include <cmath>
using namespace std;

void RandomNumber (); //This is where I set up the function to produce a random number 

int main() 
{
  cout<<"Get a random number between 1 and 100 "<<endl; //Text the user will see
  RandomNumber(); //This will print the result of the function 
 }
 
void RandomNumber () //This is where I give the function the steps to follow
{
  srand(time(0));
  int user_num = rand () % 100 + 1;
  cout<< "Your Number is: "<<user_num<<endl;
}



 
 
