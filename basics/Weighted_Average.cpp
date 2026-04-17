// All rights reserved copyright Ibtasaam Abbasi
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Function to calculate weighted average
float weightedAverage(int marks[], int weights[], int s) {
  float sum = 0, totalWeight = 0;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < s; i++) {
    sum += marks[i] * weights[i];
    totalWeight += weights[i];
  }

  return sum / totalWeight;
}

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int s;
  cout << "Enter number of subjects: ";
  /* Getting user input and storing it */
  cin >> s;

  string name_subject[s];
  int marks[s];
  int weight_subject[s];

  // Input subject details
  for (int i = 0; i < s; i++) {
    cout << "\nEnter name of subject " << i + 1 << ": ";
    /* Getting user input and storing it */
    cin >> name_subject[i];

    cout << "Enter marks for " << name_subject[i] << ": ";
    /* Getting user input and storing it */
    cin >> marks[i];

    cout << "Enter weight for " << name_subject[i] << ": ";
    /* Getting user input and storing it */
    cin >> weight_subject[i];
  }

  // Calculate weighted average
  float avg = weightedAverage(marks, weight_subject, s);

  // Formatted output
  cout << "\n---------------------------------------------\n";
  cout << left << setw(15) << "Subject" << setw(10) << "Marks" << setw(10)
       << "Weight" << setw(15) << "Weighted\n";
  cout << "---------------------------------------------\n";

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < s; i++) {
    cout << left << setw(15) << name_subject[i] << setw(10) << marks[i]
         << setw(10) << weight_subject[i] << setw(15)
         << marks[i] * weight_subject[i] << endl;
  }

  cout << "---------------------------------------------\n";
  cout << "Weighted Average: " << fixed << setprecision(2) << avg << endl;

  return 0;
}
