/// Write a program to print all odd numbers from 1 to 100 using while loop
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            
        }
        i++;
    }
    return 0;
}