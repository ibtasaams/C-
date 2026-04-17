// All rights reserved copyright Ibtasaam Abbasi
#include <iostream>
using namespace std;
class Students {
public:
  string name;
  float marks;
  int rollNo;
  float cgpa;
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter no of students: ";
  /* Getting user input and storing it */
  cin >> n;
  Students student[n];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter the details of student " << i + 1 << " : " << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, student[i].name);
    cout << "Cgpa: ";
    /* Getting user input and storing it */
    cin >> student[i].cgpa;
    cout << "Roll No: ";
    /* Getting user input and storing it */
    cin >> student[i].rollNo;
    cout << "Marks: ";
    /* Getting user input and storing it */
    cin >> student[i].marks;
  }
  cout << "\n--- Student List ---\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "\nStudent " << i + 1 << endl;
    cout << "Name: " << student[i].name << endl;
    cout << "Roll No: " << student[i].rollNo << endl;
    cout << "CGPA: " << student[i].cgpa << endl;
  }

  return 0;
}