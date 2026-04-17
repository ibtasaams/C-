// All rights reserved copyright Ibtasaam Abbasi
/////Write a program to reverse an array using two pointer approach
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
void reverse_array(int arr[], int n) {
  int start = 0, end = n - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter the no of elements of array: ";
  /* Getting user input and storing it */
  cin >> n;
  int arr[n];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter the element " << i + 1 << " : ";
    /* Getting user input and storing it */
    cin >> arr[i];
  }
  cout << "Before Reversing\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    /* Displaying output to the console */
    cout << arr[i] << " ";
  }
  cout << "\nAfter Reversing\n";
  reverse_array(arr, n);
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