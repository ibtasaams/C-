#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;   // get last digit
        sum += digit;     // add digit to sum
        n = n / 10;       // remove last digit
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
