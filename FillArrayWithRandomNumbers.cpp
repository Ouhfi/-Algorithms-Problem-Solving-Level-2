#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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
int RandomNumber(int From , int To )
{
    int randNum = 0;
     randNum = rand() % (To - From + 1) + From;

     return randNum;
}


void FillArrayWithRandomNumbers(int arr[100], int &length, int From, int To)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(From , To);
    }
    
}
void PrintArr(int arr[100] , int length)
{
    cout << "array Elemnte is ";
    for (int  i = 0; i < length; i++)
    {
         cout << arr[i] << "   ";
    }
    cout << "\n";
}

int main ()
{
    int arr[10];
    int len = ReadPositiveNumber("enter please number : ");

    int To = ReadPositiveNumber(" ===>>>> To :  ");
    int From = ReadPositiveNumber(" ===>>>> From ");

    FillArrayWithRandomNumbers (arr , len , To , From);

    PrintArr(arr , len);

}