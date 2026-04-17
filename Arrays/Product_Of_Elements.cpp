// All rights reserved copyright Ibtasaam Abbasi
////Write a program to print the product of the array
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n, product = 1;
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
    product *= arr[i];
  }

  cout << "The product is " << product;
  return 0;
}