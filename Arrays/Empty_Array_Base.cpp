// All rights reserved copyright Ibtasaam Abbasi
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

  int arr[5] = {1, 4, 5, 8, 2};

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < 5; i++) { // fix here
    if (arr[i] > x) {
      count++;
    }
  }

  cout << count;
  return 0;
}
