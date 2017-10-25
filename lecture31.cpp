#include <iostream>
using namespace std;

int main()
{
    int number = 12;
    while (number<=10)  //
    {
        cout<<number;
        number = number + 1;
    }
    
    int userNumber = 0, x = 1;
    cout<<"Enter a number: ";
    cin>>userNumber;
    
    while(x <= number)
    {
        if (x%10 == 0)
        {
            cout<<x<<endl;;
        }
        else
        {
            cout<<x<<" ";
        }
        x++;
    }
}

//The first loop doesn't work.  It should print the nubers from 1 to 10 but it doesn't.
//Identify and correct the problem.
//Comment the code as the pseudocode
//Identify the different parts of the loop.