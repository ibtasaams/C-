// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Animal {
public:
  virtual void sound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
  void sound() override { cout << "Woof Woof!" << endl; }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Dog myDog;
  myDog.sound();
  return 0;
}
