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

int main()
{
    srand(time(NULL));

    cout << "Random Small Letter: " << GetRandomCharacter(SmallLetter) << endl;
    cout << "Random Capital Letter: " << GetRandomCharacter(CapitalLetter) << endl;
    cout << "Random Special Character: " << GetRandomCharacter(SpecialCharacter) << endl;
    cout << "Random Digit: " << GetRandomCharacter(Digit) << endl;

    return 0;
}