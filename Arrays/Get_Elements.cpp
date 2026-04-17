// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to get elements of array from the user
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter the no of elements: ";
  /* Getting user input and storing it */
  cin >> n;
  int arr[n];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter element no " << i + 1 << ": ";
    /* Getting user input and storing it */
    cin >> arr[i];
  }
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    /* Displaying output to the console */
    cout << arr[i] << " ";
  }
  return 0;
}