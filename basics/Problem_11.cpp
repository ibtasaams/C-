#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to calculate weighted average
float weightedAverage(int marks[], int weights[], int s) {
    float sum = 0, totalWeight = 0;

    for (int i = 0; i < s; i++) {
        sum += marks[i] * weights[i];
        totalWeight += weights[i];
    }

    return sum / totalWeight;
}

int main() {
    int s;
    cout << "Enter number of subjects: ";
    cin >> s;

    string name_subject[s];
    int marks[s];
    int weight_subject[s];

    // Input subject details
    for (int i = 0; i < s; i++) {
        cout << "\nEnter name of subject " << i + 1 << ": ";
        cin >> name_subject[i];

        cout << "Enter marks for " << name_subject[i] << ": ";
        cin >> marks[i];

        cout << "Enter weight for " << name_subject[i] << ": ";
        cin >> weight_subject[i];
    }

    // Calculate weighted average
    float avg = weightedAverage(marks, weight_subject, s);

    // Formatted output
    cout << "\n---------------------------------------------\n";
    cout << left << setw(15) << "Subject"
         << setw(10) << "Marks"
         << setw(10) << "Weight"
         << setw(15) << "Weighted\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < s; i++) {
        cout << left << setw(15) << name_subject[i]
             << setw(10) << marks[i]
             << setw(10) << weight_subject[i]
             << setw(15) << marks[i] * weight_subject[i] << endl;
    }

    cout << "---------------------------------------------\n";
    cout << "Weighted Average: " << fixed << setprecision(2) << avg << endl;

    return 0;
}
