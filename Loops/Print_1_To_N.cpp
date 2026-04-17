// All rights reserved copyright Ibtasaam Abbasi
// Write a C program to print all natural numbers from 1 to n. - using while
// loop
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter the nth digit: ";
  /* Getting user input and storing it */
  cin >> n;
  int i = 1;
  while (i <= n) {
    cout << i << endl;
    i++;
  }
  return 0;
}