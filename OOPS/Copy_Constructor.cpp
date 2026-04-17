// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Dummy {
public:
  int id;

  // Default constructor
  Dummy(int i = 0) : id(i) {}

  // Copy constructor
  Dummy(const Dummy &d) {
    id = d.id;
    /* Displaying output to the console */
    cout << "Copy constructor called" << endl;
  }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Dummy d1(5);
  Dummy d2 = d1;

  cout << "d2.id = " << d2.id << endl;
  return 0;
}
