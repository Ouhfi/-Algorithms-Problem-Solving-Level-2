#include  <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int RandomNumber(int From , int To )
{
    int randNum = 0;
     randNum = rand() % (To - From + 1) + From;

     return randNum;
}


int main()
{
    srand(time(NULL));

     cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    
}