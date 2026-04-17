// All rights reserved copyright Ibtasaam Abbasi
/*Given an array of integers, change the value of all odd indexed elements t
to its second multiple and increment all even indexed values by 10.*/
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int arr[8] = {1, 2, 3, 4, 5, 6, 7};
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < 7; i++) {
    if (i % 2 != 0) {
      arr[i] *= 2;
    } else {
      arr[i] += 10;
    }
  }
  /// Print the new array
  for (int i = 0; i < 7; i++) {
    /* Displaying output to the console */
    cout << arr[i] << " ";
  }
  return 0;
}