////Write a program to write n natural numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}
