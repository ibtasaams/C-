// All rights reserved copyright Ibtasaam Abbasi
////Take input from the user as its marks and then store the marks in it
/// Now if the marks are less than 35 print the rollNo of studnet
/// Roll No here refers to the index of array
/// continuos memory allocations -bytesfor int - 1 element = 4 bytes
// due to continuos we can get the address
////Write a program to print first and last element of array
////Calculate the sum of marks of students in the array
/// Passing arrays to functions
////Given an array of integers, change the value of all odd indexed elemments
// to its second multiple and incerement all even indexed value by 10
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter no of elements";
  /* Getting user input and storing it */
  cin >> n;
  int arr[n];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter the element no :" << i + 1;
    /* Getting user input and storing it */
    cin >> arr[i];
  }
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (i % 2 != 0) {
      /* Displaying output to the console */
      cout << 2 * arr[i];
    } else {
      /* Displaying output to the console */
      cout << arr[i] + 10;
    }
  }
  return 0;
}