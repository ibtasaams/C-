// All rights reserved copyright Ibtasaam Abbasi
////Given an array find the triplet whose sum is equal to the given number x
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int x, count = 0;
  cout << "Enter x: ";
  /* Getting user input and storing it */
  cin >> x;
  int arr[10] = {1, 2, 3, 5, 6, 7, 4, 10, 9, 8};
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < 10; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = i + 1; j < 10; j++) {
      for (int k = j + 1; k < 10; k++) {
        if (arr[i] + arr[j] + arr[k] == x) {
          /* Displaying output to the console */
          cout << "Pair " << count + 1 << " : (" << arr[i] << ", " << arr[j]
               << ", " << arr[k] << ")" << endl;
          count++;
        }
      }
    }
  }
  cout << "Total Pairs = " << count;
  return 0;
}