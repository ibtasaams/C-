// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Car {
public:
  string brand;
  string model;
  int year;

  void displayInfo() { cout << year << " " << brand << " " << model << endl; }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Car myCar;
  myCar.brand = "Toyota";
  myCar.model = "Corolla";
  myCar.year = 2021;

  /* Displaying output to the console */
  myCar.displayInfo();
  return 0;
}
