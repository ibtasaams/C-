// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n, i;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  /* Getting user input and storing it */
  cin >> n;

  if (n == 0 || n == 1) {
    isPrime = false;
  }

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }

  if (isPrime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}
