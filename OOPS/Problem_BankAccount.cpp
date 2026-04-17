// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class BankAccount {
private:
  double balance;

public:
  BankAccount(double initialBalance) {
    if (initialBalance > 0.0)
      balance = initialBalance;
    else
      balance = 0.0;
  }

  void credit(double amount) { balance = balance + amount; }

  void debit(double amount) {
    if (amount > balance) {
      cout << "Debit amount exceeded account balance." << endl;
    } else {
      balance = balance - amount;
    }
  }

  double getBalance() { return balance; }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  BankAccount account1(50.0);
  BankAccount account2(-7.53);

  /* Displaying output to the console */
  cout << "account1 balance: $" << account1.getBalance() << endl;
  cout << "account2 balance: $" << account2.getBalance() << endl;

  account1.credit(25.53);
  account2.credit(34.20);

  cout << "account1 balance: $" << account1.getBalance() << endl;
  cout << "account2 balance: $" << account2.getBalance() << endl;

  return 0;
}
