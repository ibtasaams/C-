// All rights reserved copyright Ibtasaam Abbasi
////Write a program to print the inverted pyramid pattern
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter the no of rows: ";
  /* Getting user input and storing it */
  cin >> n;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i <= n; i++) {
    for (int k = n; k >= i; k--) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}