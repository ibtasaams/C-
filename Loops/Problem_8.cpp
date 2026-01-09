/// Write a program to calculate sum of all odd numbers from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the nth term: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }

    }
    cout << sum;
    return 0;
}