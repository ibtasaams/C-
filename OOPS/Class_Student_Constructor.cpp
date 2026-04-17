// All rights reserved copyright Ibtasaam Abbasi
// Create a class Student with a default constructor that automatically sets
// name = unknown and marks = 0 display the values when object is created
#include <iostream>
using namespace std;

class student {
public:
  string name;
  int marks;
  student() {
    name = "Unknown";
    marks = 0;
  }
  void display() {
    cout << "Name = " << name << endl;
    cout << "Marks = " << marks << endl;
  }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  student s1;
  s1.display();
  student s2;
  s2.display();

  return 0;
}