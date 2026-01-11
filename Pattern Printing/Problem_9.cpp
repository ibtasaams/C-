////Write a program to print the right star triangle pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}