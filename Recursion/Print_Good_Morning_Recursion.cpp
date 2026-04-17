// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to print n times "Good Morning " using recursion
#include <iostream>
using namespace std;
int greet(int n) {
  if (n == 0)
    return 1;
  cout << "Good Morning \n";
  return greet(n - 1);
}
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter n: ";
  /* Getting user input and storing it */
  cin >> n;
  greet(n);
  return 0;
}