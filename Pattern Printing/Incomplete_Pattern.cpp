// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter the no of rows: ";
  /* Getting user input and storing it */
  cin >> n;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i <= n; i++) {
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = n - i; j >= 1; j--) {
      cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; k++) {
      if (i == 1 || i == n || k == 1 || k == 2 * i - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }

    cout << endl;
  }

  return 0;
}
