// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to calculate the area and perimeter of a rectangle
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  float area, perimeter, length, width;
  cout << "Enter the length of the rectangle: ";
  /* Getting user input and storing it */
  cin >> length;
  cout << "Enter the width of the rectangle: ";
  /* Getting user input and storing it */
  cin >> width;
  area = length * width;
  perimeter = 2 * (length + width);
  cout << "The area of rectangle is " << area << endl;
  cout << "The perimeter of rectangle is " << perimeter;
  return 0;
}