#include  <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



enum enCharType { 
    SmallLetter = 1,        // Represents lowercase letters (ASCII 97 to 122).
    CapitalLetter = 2,      // Represents uppercase letters (ASCII 65 to 90).
    SpecialCharacter = 3,   // Represents special characters (ASCII 33 to 47).
    Digit = 4               // Represents digits (ASCII 48 to 57).
};

int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl; // Display the prompt message.
        cin >> Number;           // Read the number from the user.
    } while (Number <= 0);       // Continue prompting until a positive number is entered.
    return Number;
}

int Header()
{
    int character;

    cout << "====================================" << endl;
    cout << "          Generate Key             " << endl;
    cout << "====================================" << endl;
    cout << endl;
    cout << "1. Small Letters (a-z)" << endl;
    cout << "2. Capital Letters (A-Z)" << endl;
    cout << "3. Special Characters (!\"#$%&'()*+,-./)" << endl;
    cout << "4. Digits (0-9)" << endl;
    cout << endl;

  do
{
    cout << "Choose a character type (1-4): ";
    cin >> character;

    if (character < 1 || character > 4)
        cout << "Invalid choice! Please enter a number between 1 and 4.\n";

} while (character < 1 || character > 4);

    return character;
}

enCharType CheckChar(int nbr)
{
    switch (nbr)
    {
        case 1:
            return SmallLetter;

        case 2:
            return CapitalLetter;

        case 3:
            return SpecialCharacter;

        case 4:
            return Digit;

        default:
            return SmallLetter; // أو أي قيمة افتراضية
    }
}





int RandomNumber(int From , int To )
{
    int randNum = 0;
     randNum = rand() % (To - From + 1) + From;

     return randNum;
}


char GetRandomCharacter(enCharType CharType)
{
    

    switch (CharType)
    {
        case SmallLetter:
            return char (RandomNumber(97 ,122));
            
        case CapitalLetter:
            
          return char (RandomNumber(65,90)) ;
           
        case SpecialCharacter:
         
         return  char (RandomNumber(33 ,47));
           
        case Digit:
            
          return char (RandomNumber(48, 57))  ;
           
        default:
            return '\0'; // Return null character if invalid type
    }

   
}

string GenerateWord(enCharType CharType , short length)
{
    string word;
    int i = 0 ;
    while (i < length)
    {
        word += GetRandomCharacter( CharType);
        i++;
    }
    return word;
}

string PrintWordkey(enCharType enCharType, short length)
{
    string key;

  

        key = GenerateWord(enCharType, length) + "-";
        key += GenerateWord(enCharType, length) + "-";
        key += GenerateWord(enCharType, length) + "-";
        key += GenerateWord(enCharType, length);

       return key;

    
    
}


int main()
{
    int length = 0;
    srand(time(NULL)); 


   
    length = ReadPositiveNumber("Please enter a positive number for the length of each segment: ");
    
    cout << "====================================" << endl;
    cout << "          "<< PrintWordkey(CheckChar( Header()), length) <<"             " << endl;
    cout << "====================================" << endl;
}
