// This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.


#include <iostream>  //**Added <iostream>**
using namespace std; 
int main() {
        // Read a character in
        char letter; //**changing this from "ch" to "letter"**
        cout << "Please enter a character: ";
        cin  >> letter; 
         
// check -- is it a letter??

while (letter >= 'A' || letter <= 'Z' || letter >= 'a' || letter <= 'z') { 
    //**Made this a loop so it keeps running till a non letter is entered** 
        if (letter >= 'A' && letter <= 'Z') {
            //if (letter <= 'Z') { **Don't need another if can merge with &&**
               cout << "Yes, that is a uppercase letter." <<endl;
               cout << "Enter another letter: ";
                cin >> letter;
        }
            
        
        else if (letter >= 'a' && letter <= 'z') {
            //if (letter <= 'z') { **Don't need another if can merge with else if** 
               cout << "Yes, that is a lowercase letter" << endl;
               cout << "Enter another letter: ";
                cin >> letter; }
        
        else{
            cout << "Not a letter"<<endl;
            break;
        }
            
        }
        
        
   
          return 0; }