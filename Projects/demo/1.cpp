// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;
class customer {
public:
  string name;
  string email;
  string password;
  float balance;
  customer() {}
  // inline customer(string n, string e, string p, float b ): name(n), email(e),
  // password(p), balance(b){

  // }

  customer(string name, string email, string password, float balance) {
    this->name = name;
    this->email = email;
    this->password = password;
    this->balance = balance;
  }

  void display() {
    cout << name << endl;
    cout << email << endl;
    cout << password << endl;
    cout << balance << endl;
  }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  customer c1("Ibtasaam", "iabbasi", "12290212", 8292.9);
  c1.display();
  return 0;
}