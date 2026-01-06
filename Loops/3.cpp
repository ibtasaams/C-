/// Write a program to calculate n odd terms using for loop
#include <iostream>
using namespace std;
int main()
{
    int n, odd;
    cout << "Enter the no of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        odd = 2 * i - 1;
        cout << odd <<endl;
    }
    return 0;
}