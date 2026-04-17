// All rights reserved copyright Ibtasaam Abbasi
// Write a C program to print all natural numbers in reverse (from n to 1). -
// using while loop
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
  int i = n;
  while (i > 0) {
    cout << i << endl;
    i--;
  }
  return 0;
}