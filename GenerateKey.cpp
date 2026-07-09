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
    string word;

    for (int i = 0; i < length; i++)
    {   //word = "-";
        word += GenerateWord(enCharType, length) + "-";
       

    }
    return word;
}


int main()
{
     srand(time(NULL));
   cout <<  PrintWordkey(CapitalLetter, 4);

}
