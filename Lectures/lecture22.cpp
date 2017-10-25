#include <iostream>
#include <cstdlib> //? What is this?
#include <ctime> //* You have to include ctime
using namespace std;

void guessingGame (); //* Must declare the function before int main()

int main()
{
    cout<<"We are going to play the guessing game 3 times"<<endl;
    guessingGame();
    guessingGame();
    guessingGame();
}

void guessingGame () //Declaration
{
    srand(time(0)); //Body and defintion 
    int randomNumber = rand() % 10 + 1; //* use int becuse you only want one #

    int userNumber = 0;
    cout<<"Please choose a number between 1 and 10"; //* There should be a space after this
    cin>>userNumber;

    cout<<"You picked: "<<userNumber<<"  The number was: "<<randomNumber<<endl; //Function Call
}

//Identify with //* 2-4 items that are important
//Identify with //? 2-4 items that are incorrect, unclear, or you have questions on.
//Comment the function appropriately
//Identify the following parts of the function:
//  definition
//  declaration
//  body
//  function call
