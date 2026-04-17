// All rights reserved copyright Ibtasaam Abbasi
/// Write a program to find the real roots of the quadratic equation
#include <cmath>
#include <iostream>
using namespace std;

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  double a, b, c;
  cout << "Enter a: ";
  /* Getting user input and storing it */
  cin >> a;
  cout << "Enter b: ";
  /* Getting user input and storing it */
  cin >> b;
  cout << "Enter c: ";
  /* Getting user input and storing it */
  cin >> c;

  double disc = b * b - 4 * a * c;

  if (disc >= 0) {
    double root1 = (-b + sqrt(disc)) / (2 * a);
    double root2 = (-b - sqrt(disc)) / (2 * a);
    cout << "Root 1: " << root1 << endl;
    cout << "Root 2: " << root2 << endl;
  } else {
    cout << "Roots are not real\n";
  }

  return 0;
}
