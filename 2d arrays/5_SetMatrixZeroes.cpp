// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;
#include "../Array2d.h"

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int arr[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  int rows = 3, cols = 3;
  bool rowZero = false, colZero = false;

  for (int j = 0; j < cols; j++)
    if (arr[0][j] == 0)
      rowZero = true;
  for (int i = 0; i < rows; i++)
    if (arr[i][0] == 0)
      colZero = true;

  for (int i = 1; i < rows; i++) {
    for (int j = 1; j < cols; j++) {
      if (arr[i][j] == 0) {
        arr[i][0] = 0;
        arr[0][j] = 0;
      }
    }
  }

  for (int i = 1; i < rows; i++) {
    for (int j = 1; j < cols; j++) {
      if (arr[i][0] == 0 || arr[0][j] == 0)
        arr[i][j] = 0;
    }
  }

  if (rowZero)
    for (int j = 0; j < cols; j++)
      arr[0][j] = 0;
  if (colZero)
    for (int i = 0; i < rows; i++)
      arr[i][0] = 0;

  /* Displaying output to the console */
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }

  return 0;
}
