// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

int fib(int n) {
  if (n <= 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n = 9;
  /* Displaying output to the console */
  cout << "Fibonacci number is " << fib(n) << endl;
  return 0;
}
