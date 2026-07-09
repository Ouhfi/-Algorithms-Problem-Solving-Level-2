#include <iostream>
#include <string>

using namespace std;


string ReadPassword()
{
    string Password;  // Variable to store the user's password.
    
    cout << "Please enter a 3-Letter Password (all capital)?\n"; // Prompt the user.
    cin >> Password;  // Read the password input.
    
    return Password;  // Return the password.
}

 void PrintAllFromAAAtoZZZ(string Password)
{
   
    string word = "";
    int counter = 0;

    int i = 65; 
    while (i <= 90)
    {
        int j = 65;

        while (j <= 90)
        {
            int k = 65;

            while ( k <= 90)
            {
                counter++;
             word +=char(i);
             word +=char(j);
             word +=char(k);
             cout << "Trial [" << counter << "] : " << word << endl;
             if (Password == word)
             {
               cout << "Password is: " << word << endl;
                cout << "Found after " << counter << " trials.\n";
                return;
             }
             
             word = "";
            
                k++;
            }
            j++;
        }
        i++;
    }
     cout << "\n____________________________\n";
}

int main()
{
    PrintAllFromAAAtoZZZ(ReadPassword());
}