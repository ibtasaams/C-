// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n, reversed_n = 0, remainder, original_n;

  cout << "Enter an integer: ";
  /* Getting user input and storing it */
  cin >> n;
  original_n = n;

  while (n != 0) {
    remainder = n % 10;
    reversed_n = reversed_n * 10 + remainder;
    n /= 10;
  }

  /* Displaying output to the console */
  if (original_n == reversed_n)
    cout << original_n << " is a palindrome.";
  else
    cout << original_n << " is not a palindrome.";

  return 0;
}
