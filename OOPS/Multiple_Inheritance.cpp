// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Printer {
public:
  void print() { cout << "Printing document..." << endl; }
};

class Scanner {
public:
  void scan() { cout << "Scanning document..." << endl; }
};

class MultiFunctionDevice : public Printer, public Scanner {};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  MultiFunctionDevice mfd;
  mfd.print();
  mfd.scan();
  return 0;
}
