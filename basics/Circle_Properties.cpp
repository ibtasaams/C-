// All rights reserved copyright Ibtasaam Abbasi
////Write a program to calculate the circumference and area of circle
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  float radius, area, circumference;
  const float pi = 3.1415;
  cout << "Enter the radius of circle: ";
  /* Getting user input and storing it */
  cin >> radius;
  /// Area
  area = pi * (radius * radius);
  circumference = 2 * pi * radius;
  cout << "The area of circle is " << area << endl;
  cout << "The circumference of circle is " << circumference << endl;
  return 0;
}