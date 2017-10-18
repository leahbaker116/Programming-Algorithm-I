/*
Leah Baker
October 17th 2017
Lab 3.3 - Loops

This program will take user guesses for a number between 1 and 50. The number 
will be set by the computer, and the user will need to keep guessing till they
get the number. Their only clue will be the program telling them to go lower or
higer. The program will end when the user guesses the correct number. */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main() {
    int user_num; //This is what will be filled with the user guess
    int x; //This is for the for loop to count
    
cout<<"I'm thinking of a number between 1 and 50, guess what it is."<<endl;
    cout<<"Enter a number: ";
    cin>>user_num;


  srand(time(0)); //This will determine the random number based on time 
  int rand_num = rand () % 50 + 1;//50 + 1 becuase it's 1-50


while (user_num != rand_num){ //The loop starts when the guess does not equal the random #
    
    if (user_num>50){ //If the number is above 50 the program says invalid 
        cout<<"Invalid Entry"<<endl;
        cout<<"Enter a number: ";
            cin>>user_num;
    }
    
    else if (user_num > rand_num){ //If number is above random 
        cout<<"Too High"<<endl;
        cout<<"Enter a number: ";
            cin>>user_num;
    }
    
    else if (user_num<rand_num){ //If number is below random 
        cout<<"Too Low"<<endl;
        cout<<"Enter a number: ";
            cin>>user_num;
    }
  

}
for (x =0; x < 6; ++x){ //This counts down from 0-5 once the user is right 
    cout<<x<<endl;
}
cout<<"Just Right!!"<<endl; //This executes if the user guesses what the random number is 
    
    
    
}