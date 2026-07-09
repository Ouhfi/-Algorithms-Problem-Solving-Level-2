#include <iostream> // Include the iostream library for input and output operations.
#include <string>   // Include the string library for using the string class.

using namespace std; // Use the standard namespace.

string ReadText()
{
    string Text;  // Declare a string variable to store the input text.
    
    cout << "Please enter Text?\n"; // Prompt the user for input.
    getline(cin, Text);              // Read an entire line from standard input.
    
    return Text; // Return the entered text.
}

string EncryptText(string Text, short EncryptionKey)
{
    for (int  i = 0; i < Text.length(); i++)
    {
        Text[i] = char(int(Text[i]) + EncryptionKey); // Encrypt each character by shifting its ASCII value.
    }
    return Text;
    
}

string DecryptText(string Text, short EncryptionKey)
{
    for (int  i = 0; i < Text.length(); i++)
    {
        Text[i] = char(int(Text[i]) - EncryptionKey); // Encrypt each character by shifting its ASCII value.
    }
    return Text;
    
}

int main()
{
    int key = 13;

    string Encrypt = EncryptText(ReadText() , key);
    string Decrypt = DecryptText(Encrypt, key);

    //  cout << "\nText Before Encryption : " << ReadText() << endl;
    // // Display the encrypted text.
    cout << "Text After Encryption  : " << Encrypt << endl;
    // Display the decrypted text.
    cout << "Text After Decryption  : " << Decrypt << endl;
}