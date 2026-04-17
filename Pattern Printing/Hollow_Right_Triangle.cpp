// All rights reserved copyright Ibtasaam Abbasi
////Write a program to print the hollow right triangle pattern
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
    for (int j = 1; j <= i; j++) {
      if (i == 1 || i == n || j == 1 || j == i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}