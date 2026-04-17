// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to calculate sum of all odd numbers from 1 to n
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n, sum = 0;
  cout << "Enter the nth term: ";
  /* Getting user input and storing it */
  cin >> n;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      sum = sum + i;
    }
  }
  /* Displaying output to the console */
  cout << sum;
  return 0;
}