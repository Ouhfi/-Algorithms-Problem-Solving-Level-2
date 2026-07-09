#include <iostream>
#include <string>

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

void PrintInvertedNumberPattern(int nbr)
{
    cout << "\n";
    
    for (int i = 1; i <= nbr   ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i ;
        }
        cout << "\n";
    }
    
}
int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("pleas enter numper :"));
}