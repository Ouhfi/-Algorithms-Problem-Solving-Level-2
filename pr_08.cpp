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

int CountDigitFrequency(short DigitToCheck , int nbr)
{
    int FreqCount = 0;
     int Remainder = 0;

     while(nbr > 0)
     {
       Remainder = nbr % 10;
        nbr /= 10;
        if(Remainder == DigitToCheck)
     {
        FreqCount++;
     }
     }
     return FreqCount;
}

int main()
{
  
       int Number = ReadPositiveNumber("Please enter the main number?");
       short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");
         cout << "\nDigit " << DigitToCheck << " Frequency is "
         << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";

}