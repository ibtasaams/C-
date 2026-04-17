// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;
#include "../Array2d.h"

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int rows = 3, cols = 3;
  int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

  /* Displaying output to the console */
  cout << "Spiral Order: " << endl;

  while (top <= bottom && left <= right) {
    for (int i = left; i <= right; ++i)
      cout << a[top][i] << " ";
    top++;
    for (int i = top; i <= bottom; ++i)
      cout << a[i][right] << " ";
    right--;
    if (top <= bottom) {
      for (int i = right; i >= left; --i)
        cout << a[bottom][i] << " ";
      bottom--;
    }
    if (left <= right) {
      for (int i = bottom; i >= top; --i)
        cout << a[i][left] << " ";
      left++;
    }
  }
  return 0;
}
