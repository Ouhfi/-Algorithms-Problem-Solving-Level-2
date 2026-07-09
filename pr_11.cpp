#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl;  // Display the prompt message.
        cin >> Number;            // Read the user's input.
    } while (Number <= 0);        // Repeat if the number is not positive.

    return Number;  // Return the valid positive number.
}

int ReverseNumber(int nbr)
{
    int Re = 0;
    int nbr2 = 0;
    while (nbr > 0 )
    {
        Re = nbr % 10;
        nbr /= 10;

        nbr2 = nbr2 * 10 + Re;
    }
    
    return nbr2;
}
bool IsPalindromeNumber( int nbr )
{
    return nbr == ReverseNumber(nbr);
}

int main()
{
   if (IsPalindromeNumber(ReadPositiveNumber("enter number pleas : ")))
   {
    cout << "  is  Palindrome Number" << endl;
   }

    else 
    cout << "Is not Palindrome Number" << endl;
}
