//other style of writing code

#include <iostream>

//using namespace can make stuff a lot easier
//be carefull not to pollute global namespace
using namespace std;

//basic structure, all members are public by default
struct myClass
{
    //underscore line in naming represents members
    int _integer = 12345678987654321;

    //just a regular procedure
    void function()
    {
       cout << "Everything is awesome!\n";
    }

    //check if number is prime
    bool isPrime(int num)
    {
        for(int i = 2; i <= num/2; ++i)
            if(!(num % i)) return false;
        return true;
    }
}

//every program starts here
int main()
{
    cout << "Is number " << _integer
    << " a prime number? [Y/N]" << endl;

    char answer;

    while(1)
    {
        cin >> answer;

        if( answer == 'y' || answer == 'Y')
        {
            char = 1;
            break;
        }
        else if (answer == 'n' || answer == 'N')
        {
            char = 0;
            break;
        }
        else cout << "\nType 'Y'/'y' or 'N'/'n' for \"yes\" or \"no\" respectively\n";
    )

    //we will comment out the old code
    //cout << "Hello World!" << endl;
    
    //print the results
    if(char == isPrime(_integer)) cout << "\nYou are correct! Congratulations here's a cookie!";
    else cout << "\nDamn, You were close. Better luck next time!";

    return 0;
}
