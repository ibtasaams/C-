// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to count the digits of a number
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter the number";
  /* Getting user input and storing it */
  cin >> n;
  int count = 0, remainder;
  while (remainder <= 0) {
    remainder = n % 10;
    n = n / 10;
    count += 1;
  }
  cout << count;
  return 0;
}