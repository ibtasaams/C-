// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Employee {
private:
  int salary;

public:
  void setSalary(int s) {
    if (s >= 0)
      salary = s;
    else
      salary = 0;
  }

  int getSalary() { return salary; }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Employee e1;
  e1.setSalary(50000);

  /* Displaying output to the console */
  cout << "Employee Salary is $" << e1.getSalary() << endl;
  return 0;
}
