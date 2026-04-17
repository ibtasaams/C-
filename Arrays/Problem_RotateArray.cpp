// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;
#include "../ArrayFunctions.h"

void reverse(int arr[], int start, int end) {
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
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 3;

  k = k % n;

  reverse(arr, 0, n - 1);
  reverse(arr, 0, k - 1);
  reverse(arr, k, n - 1);

  /* Displaying output to the console */
  cout << "Rotated array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
