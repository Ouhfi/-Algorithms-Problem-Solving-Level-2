#include <iostream>
#include  <string>

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

void ReadArray(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the total number of elements the user wishes to input.
    
    cout << "\nEnter array elements: \n";
    // Loop from 0 to arrLength - 1 to read each array element.
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";  // Display a prompt for each element (using 1-based indexing for clarity).
        cin >> arr[i];                           // Read the current element into the array.
    }
    cout << endl;  // Print an extra newline for formatting.
}



void Printarray(int arr[100] , int len)
{

    for (int  i = 0; i < len; i++)
    {
          cout << arr[i] << " ";
    }
}

int NumberToCheck(int arr[] , int nbr , int len )
{
    int counter = 0;

 for (int  i = 0; i < len; i++)
 {
    if( arr[i] == nbr )
    counter++;
 }
    
 return counter;
}

int main()
{ 
  int arr[100];
  int len =  ReadPositiveNumber("enter len in array ");
  
 
    ReadArray(arr , len);

    Printarray(arr , len);

int CheckNumber = ReadPositiveNumber("enter Number to check ");

   cout <<  CheckNumber << " is repeated " <<  NumberToCheck( arr , len , CheckNumber) <<endl;
   
}