// Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the nth number: ";
    cin >> n;
    int i = n;
    while (i > 0)
    {
        cout << i << endl;
        i--;
    }
    return 0;
}