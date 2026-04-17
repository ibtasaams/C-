// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Counter {
public:
  static int count;

  Counter() { count++; }
};
int Counter::count = 0;

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Counter c1;
  Counter c2;
  Counter c3;

  /* Displaying output to the console */
  cout << "Total objects created: " << Counter::count << endl;
  return 0;
}
