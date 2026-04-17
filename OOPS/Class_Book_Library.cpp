// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;

class Book {
public:
  string title;
  string author;

  Book() {} // Default constructor
  Book(string t, string a) : title(t), author(a) {}

  void display() { cout << "Book: " << title << " by " << author << endl; }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Book library[2];
  library[0] = Book("1984", "George Orwell");
  library[1] = Book("To Kill a Mockingbird", "Harper Lee");

  /* Loop Block */
  for (int i = 0; i < 2; i++) {
    library[i].display();
  }
  return 0;
}
