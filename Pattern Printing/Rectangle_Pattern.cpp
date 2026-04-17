// All rights reserved copyright Ibtasaam Abbasi
// Write a program to print the rectangle pattern
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int rows, columns;
  cout << "Enter the no of rows: ";
  /* Getting user input and storing it */
  cin >> rows;
  cout << "Enter the no of columns: ";
  /* Getting user input and storing it */
  cin >> columns;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i <= rows; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = 1; j <= columns; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}