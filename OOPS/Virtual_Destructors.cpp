// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Base {
public:
  Base() { cout << "Constructing Base\n"; }
  virtual ~Base() { cout << "Destroying Base\n"; }
};

class Derived : public Base {
public:
  Derived() { cout << "Constructing Derived\n"; }
  ~Derived() { cout << "Destroying Derived\n"; }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Base *b = new Derived();
  delete b; // Correctly calls Derived destructor then Base destructor
  return 0;
}
