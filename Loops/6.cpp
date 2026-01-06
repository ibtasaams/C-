/// Write a program using for loop to calculate the factorial of nth number
#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter the number you want to calcuate the factorial of: ";
    cin >> n;
    if(n<0){
        cerr << "Enter a valid number";
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;
}
