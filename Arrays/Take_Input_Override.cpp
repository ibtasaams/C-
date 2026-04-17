// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"

void takeinput(int arr[], int n) {
  /*
   * Nested Loop Block: Matrix/2D Traversal
   * Iterates through rows and columns
   */
  /*
   * Main Execution Block
   * This is where the program starts running.
   */
  int main() {
    int n;
    cout << "Enter a number: ";
    /* Getting user input */
    cin >> n;
    int arr[n];

    takeinput(arr, n);
    printarray(arr, n);
    printreverse(arr, n);
    return 0;
  }