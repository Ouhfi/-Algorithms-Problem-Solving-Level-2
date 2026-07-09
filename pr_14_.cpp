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

#include <iostream>
using namespace std;

void PrintInvertedLetterPattern(int Number)
{
    for (int i = Number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + i - 1);
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("pleas enter numper :"));
}