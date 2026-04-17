// All rights reserved copyright Ibtasaam Abbasi
////Matrix operations using 2d arrays
#include <iostream>
using namespace std;
#include "../Array2d.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int a[3][3], b[3][3], c[3][3];
  int rows = 3, cols = 3;
  ////Get matrix a from user
  for (int i = 0; i < rows; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = 0; j < cols; j++) {
      cout << "Enter row " << i + 1 << ",Column " << j + 1 << " : ";
      /* Getting user input and storing it */
      cin >> a[i][j];
    }
  }
  /* Displaying output to the console */
  cout << "Enter matrix A: \n";
  /// Get matrix b from user
  for (int i = 0; i < rows; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = 0; j < cols; j++) {
      cout << "Enter row " << i + 1 << ",Column " << j + 1 << " : ";
      /* Getting user input and storing it */
      cin >> b[i][j];
    }
  }
  ////Multiply two matrix
  cout << "Enter matrix B: \n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < rows; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = 0; j < cols; j++) {
      c[i][j] = 0;
      for (int k = 0; k < cols; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  /////print the resultant vector
  cout << "Resultant vector: " << endl;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < rows; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = 0; j < cols; j++) {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
