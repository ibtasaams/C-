////Write a program to print the hollow square pattern with diagonal
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || j == i || i == 1 || j == 1 || i == n | j == n | j == n - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}