#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;

void RandomNumber ();

int main() 
{
  cout<<"Get a random number between 1 and 100 "<<endl;
  RandomNumber();
 }
 
void RandomNumber ()
{
  srand(time(0));
  int user_num = rand () % 100 + 1;
  cout<< "Your Number is: "<<user_num<<endl;
}



 
 
