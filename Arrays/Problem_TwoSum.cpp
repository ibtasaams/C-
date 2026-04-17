// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int arr[] = {2, 7, 11, 15};
  int target = 9;
  int n = 4;

  /* Displaying output to the console */
  cout << "Looking for two elements that add up to " << target << endl;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == target) {
        cout << "Found indices: " << i << " and " << j << endl;
        return 0;
      }
    }
  }
  return 0;
}
