// All rights reserved copyright Ibtasaam Abbasi
/// Given the radius of the sphere find the volume and surface area of the
/// sphere
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  const float pi = M_PI;
  float radius, volume, suface_area;
  cout << "Enter the radius: ";
  /* Getting user input and storing it */
  cin >> radius;
  volume = (4.0 / 3.0) * pi * pow(radius, 3);
  suface_area = 4 * pi * (radius * radius);
  cout << "Volume: " << fixed << setprecision(2) << volume << endl;
  cout << "Surface Area: " << fixed << setprecision(2) << suface_area << endl;
  return 0;
}