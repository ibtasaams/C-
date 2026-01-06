/// Write a program to write n odd numbers using for loops
#include <iostream>
using namespace std;
int main()
{
    int n, even;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        even = 2 * i;
        cout << even << endl;
    }
}