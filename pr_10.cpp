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
int ReverseNumber( int  nbr)
{
    int Remainder = 0;
     int Number2 = 0; 
     while (nbr > 0)
     {
        Remainder = nbr % 10;
        nbr /= 10;

        Number2 = Number2 * 10 + Remainder;
     }
     return Number2;
     
}

void  PrintNumber(int nbr)
{
    int Remainder = 0;

    while (nbr > 0)
    {
        Remainder = nbr  % 10;
        nbr /= 10;
        cout << Remainder << endl;
    }
}

int main()
{
   PrintNumber(ReverseNumber(ReadPositiveNumber("enter number pleas")));
}