// All rights reserved copyright Ibtasaam Abbasi
/// Write a progrm to find the minimum number in an array
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Specify the size of array: ";
  /* Getting user input and storing it */
  cin >> n;
  int arr[n];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter the element no " << i + 1 << ": ";
    /* Getting user input and storing it */
    cin >> arr[i];
  }

  int min = arr[0];
  cout << "The array is [";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  cout << "]\nThe minimum element is " << min;
  return 0;
}