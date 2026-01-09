////Write a program to print the hollow rhombus pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++)
        {
            if (i == 1 || i == n || k == 1 || k == n)
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