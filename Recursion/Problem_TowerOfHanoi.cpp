// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
  if (n == 0)
    return;
  towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
  /* Displaying output to the console */
  cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod
       << endl;
  towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n = 3;
  towerOfHanoi(n, 'A', 'C', 'B');
  return 0;
}
