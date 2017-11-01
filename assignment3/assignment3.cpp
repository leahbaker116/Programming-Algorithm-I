/* 
Leah Baker
October 26th 2017
Assignment 3, Pig 
CSCI 20

The program will play a game of PIG with a user. The computer will have it's own
strategy. PIG is played by rolling one six sided die, if a 2-6 is rolled the 
player has the option to roll again or end the turn. If they end points are 
awarded in the amount rolled. If a 1 is rolled the users turn ends, and no points
are given for that turn. The game ends when one user reaches a score of 100. */

#include <iostream>
#include <ctime>
using namespace std;

int DiceRoll () { 
     srand(time(0));
  int dice = rand () % 6 + 1;
  return dice;
}

class ComputerPlay{
    public:
        void Computer(){
            
        computer_score =0;
            
            while (num_rolls <= 5 || computer_turn <= 15 ){
            
            DiceRoll();
            
                if (DiceRoll() != 1){
                    computer_turn = computer_turn + DiceRoll();
                    num_rolls ++;
                }
                else {
                    computer_turn = 0;
                   // return 0;
                }}
            computer_score = computer_score + computer_turn; 
            
        }
        int setComputerScore (){
            computer_score = computer_score;
        }
    private:
        int num_rolls;
        int computer_score;
        int computer_turn;
};

int main (){
    char user_start;
    int user_turn = 0;
    int user_score = 0;
    int score_limit = 100;
   
cout<<"Enter r to start or q to quit ";
cin>>user_start;

DiceRoll();
    
    while (DiceRoll() != 1){
        
        cout<<"Enter r to roll or q to quit ";
            cin>>user_start;
            
            if (user_start == 'r'){
                cout<<"Your roll is: "<<DiceRoll()<<endl;
                user_turn = user_turn + DiceRoll();  
                cout<<"Your score in this round is: "<<user_turn<<endl;
               
            user_score = user_turn + user_score;
            }
            else {
                cout<<"You quit your turn, your score is: "<<user_score<<endl;
            }
        }
    if (DiceRoll() == 1){
        user_turn = 0;
        cout<<"You rolled a one, no points this round"<<endl;}

}
