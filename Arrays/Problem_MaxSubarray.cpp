// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n = 9;

  int max_so_far = arr[0];
  int curr_max = arr[0];

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i < n; i++) {
    curr_max = max(arr[i], curr_max + arr[i]);
    max_so_far = max(max_so_far, curr_max);
  }

  /* Displaying output to the console */
  cout << "Maximum contiguous sum is " << max_so_far << endl;
  return 0;
}
