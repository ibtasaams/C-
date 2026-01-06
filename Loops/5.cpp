////Write a program to calculate the tables of a n number using for loop
#include <iostream>
using namespace std;
int main()
{
    int n, result;
    cout << "Enter the number you want the table of: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        result = n * i;
        cout << n << " * " << i << " = " << result << endl;
    }
    return 0;
}