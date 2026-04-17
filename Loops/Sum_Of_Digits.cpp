// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n, sum = 0, digit;

  cout << "Enter a number: ";
  /* Getting user input and storing it */
  cin >> n;

  while (n > 0) {
    digit = n % 10; // get last digit
    sum += digit;   // add digit to sum
    n = n / 10;     // remove last digit
  }

  /* Displaying output to the console */
  cout << "Sum of digits: " << sum << endl;

  return 0;
}
