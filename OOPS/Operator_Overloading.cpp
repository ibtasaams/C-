// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Point {
public:
  int x, y;
  Point(int x = 0, int y = 0) : x(x), y(y) {}

  Point operator+(const Point &b) {
    Point p;
    p.x = this->x + b.x;
    p.y = this->y + b.y;
    return p;
  }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Point p1(10, 5), p2(2, 4);
  Point p3 = p1 + p2;

  /* Displaying output to the console */
  cout << "p3: (" << p3.x << ", " << p3.y << ")" << endl;
  return 0;
}
