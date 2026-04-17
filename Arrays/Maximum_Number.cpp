// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to find the maximum number in an array
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter no of elements: ";
  /* Getting user input and storing it */
  cin >> n;
  int arr[n];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << " : ";
    /* Getting user input and storing it */
    cin >> arr[i];
  }
  int max = arr[0];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  cout << "The maximum element is " << max;

  return 0;
}