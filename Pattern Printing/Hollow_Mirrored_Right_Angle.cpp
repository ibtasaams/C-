// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to print the hollow mirrored right angle triangle
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
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = n - i; j >= 1; j--) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      if (k == 1 || k == i || i == 1 || i == n) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}