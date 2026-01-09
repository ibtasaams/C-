/// Write a program to print multiplication of numbers using while numbers
#include <iostream>
using namespace std;
int main()
{
    int n, result;
    cout << "Enter the no of table you want to print : ";
    cin >> n;
    int i = 1;
    while (i <= 10)
    {
        result = n * i;
        cout << n << " * " << i << " = " << result << endl;
        i++;
    }
    return 0;
}