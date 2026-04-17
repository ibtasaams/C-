// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Box {
private:
  int width;

public:
  Box() : width(0) {}
  friend void printWidth(Box b);
  void setWidth(int w) { width = w; }
};

void printWidth(Box b) { cout << "Width of box: " << b.width << endl; }

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Box b;
  b.setWidth(10);
  printWidth(b);
  return 0;
}
