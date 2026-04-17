// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to print multiplication of numbers using while numbers
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n, result;
  cout << "Enter the no of table you want to print : ";
  /* Getting user input and storing it */
  cin >> n;
  int i = 1;
  while (i <= 10) {
    result = n * i;
    cout << n << " * " << i << " = " << result << endl;
    i++;
  }
  return 0;
}