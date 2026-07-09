#include <iostream>
#include <string>

using namespace std;

void PrintAllFromAAAtoZZZ()
{
   

    int i = 65; 
    while (i <= 90)
    {
        int j = 65;

        while (j <= 90)
        {
            int k = 65;

            while ( k <= 90)
            {
              cout << char(i) << char(j) << char(k) << endl;
            
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
    PrintAllFromAAAtoZZZ();
}