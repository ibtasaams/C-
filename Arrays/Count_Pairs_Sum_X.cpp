// All rights reserved copyright Ibtasaam Abbasi
/// Find the total no of pairs in the array whose sum is equal to the given no x
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int x;
  cout << "Enter x: ";
  /* Getting user input and storing it */
  cin >> x;
  int count = 0;
  int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < 8; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = i + 1; j < 8; j++) {
      if (x == arr[i] + arr[j]) {
        /* Displaying output to the console */
        cout << "Pair " << count + 1 << " : (" << arr[i] << ", " << arr[j]
             << ")" << endl;
        count++;
      }
    }
  }
  cout << "Total Pairs = " << count;
  return 0;
}