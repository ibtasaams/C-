// All rights reserved copyright Ibtasaam Abbasi
// Write a C program to find sum of all natural numbers between 1 to n.
/// Method 1.
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter the nth number: ";
  /* Getting user input and storing it */
  cin >> n;
  cout << (n * (n + 1)) / 2;
  return 0;
}
/// Method 2.
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Ente the nth term: ";
  /* Getting user input and storing it */
  cin >> n;
  int sum = 0;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i <= n; i++) {
    sum = sum + i;
  }
  /* Displaying output to the console */
  cout << sum;
}