// All rights reserved copyright Ibtasaam Abbasi
/////Write a program using functions to calculate the class average and print
///the names of students with their marks /i)/ add the marks of student

#include <iostream>
using namespace std;

const int MAX = 100;

// Subproblem (a): Calculate average
double calculateAverage(int scores[], int n) {
  int sum = 0;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    sum += scores[i];

  return (double)sum / n;
}

// Subproblem (b): Print students below average
void printBelowAverage(string names[], int scores[], int n, double avg) {
  cout << "\nStudents below average:\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (scores[i] < avg)
      cout << names[i] << endl;
  }
}

// Subproblem (c): Find highest score
int findHighest(int scores[], int n) {
  int max = scores[0];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i < n; i++) {
    if (scores[i] > max)
      max = scores[i];
  }
  return max;
}

// Subproblem (d): Print students with highest score
void printHighestStudents(string names[], int scores[], int n, int highest) {
  cout << "\nStudents with highest score:\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (scores[i] == highest)
      cout << names[i] << endl;
  }
}

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  string names[MAX];
  int scores[MAX];

  cout << "Enter number of students: ";
  /* Getting user input and storing it */
  cin >> n;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter name of student " << i + 1 << ": ";
    /* Getting user input and storing it */
    cin >> names[i];
    cout << "Enter score: ";
    /* Getting user input and storing it */
    cin >> scores[i];
  }

  // Combine subproblems
  double avg = calculateAverage(scores, n);
  cout << "\nAverage score: " << avg << endl;

  printBelowAverage(names, scores, n, avg);

  int highest = findHighest(scores, n);
  cout << "\nHighest score: " << highest << endl;

  printHighestStudents(names, scores, n, highest);

  return 0;
}
#include <iostream>
using namespace std;

class Student {
private:
  string name;
  int score;

public:
  void input() {
    cout << "Enter name: ";
    /* Getting user input and storing it */
    cin >> name;
    cout << "Enter score: ";
    /* Getting user input and storing it */
    cin >> score;
  }

  string getName() { return name; }

  int getScore() { return score; }
};

class StudentManager {
private:
  Student students[100];
  int n;

public:
  void inputStudents() {
    cout << "Enter number of students: ";
    /* Getting user input and storing it */
    cin >> n;

    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < n; i++) {
      cout << "\nStudent " << i + 1 << endl;
      students[i].input();
    }
  }

  double calculateAverage() {
    int sum = 0;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < n; i++)
      sum += students[i].getScore();

    return (double)sum / n;
  }

  int findHighest() {
    int max = students[0].getScore();
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 1; i < n; i++) {
      if (students[i].getScore() > max)
        max = students[i].getScore();
    }
    return max;
  }

  void printBelowAverage(double avg) {
    cout << "\nStudents below average:\n";
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < n; i++) {
      if (students[i].getScore() < avg)
        cout << students[i].getName() << endl;
    }
  }

  void printHighestStudents(int highest) {
    cout << "\nStudents with highest score:\n";
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < n; i++) {
      if (students[i].getScore() == highest)
        cout << students[i].getName() << endl;
    }
  }

  void displayResults() {
    double avg = calculateAverage();
    cout << "\nAverage Score: " << avg << endl;

    printBelowAverage(avg);

    int highest = findHighest();
    cout << "\nHighest Score: " << highest << endl;

    printHighestStudents(highest);
  }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  StudentManager manager;
  manager.inputStudents();
  manager.displayResults();
  return 0;
}

//////next level
#include <iomanip>
#include <iostream>
using namespace std;

const int MAX = 100;
const int SUBJECTS = 5;

// ---------- Subproblem (a) ----------
double calculateAverage(int scores[], int n) {
  int sum = 0;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    sum += scores[i];
  return (double)sum / n;
}

// ---------- Subproblem (b) ----------
void printBelowAverage(string names[], int scores[], int n, double avg) {
  cout << "\nStudents Below Average:\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    if (scores[i] < avg)
      cout << names[i] << endl;
}

// ---------- Subproblem (c) ----------
int findHighest(int scores[], int n) {
  int max = scores[0];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i < n; i++)
    if (scores[i] > max)
      max = scores[i];
  return max;
}

// ---------- Subproblem (d) ----------
void printHighestStudents(string names[], int scores[], int n, int highest) {
  cout << "\nStudents with Highest Score:\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    if (scores[i] == highest)
      cout << names[i] << endl;
}

// ---------- Grade Function ----------
char calculateGrade(double avg) {
  if (avg >= 85)
    return 'A';
  else if (avg >= 70)
    return 'B';
  else if (avg >= 55)
    return 'C';
  else if (avg >= 40)
    return 'D';
  else
    return 'F';
}

// ---------- Main ----------
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  string names[MAX];
  int scores[MAX];
  string subjects[SUBJECTS] = {"Math", "Physics", "Chemistry", "English", "CS"};
  int marks[MAX][SUBJECTS];
  double studentAvg[MAX];

  cout << "Enter number of students: ";
  /* Getting user input and storing it */
  cin >> n;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "\nEnter name of student " << i + 1 << ": ";
    /* Getting user input and storing it */
    cin >> names[i];

    int sum = 0;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = 0; j < SUBJECTS; j++) {
      cout << "Enter marks in " << subjects[j] << ": ";
      /* Getting user input and storing it */
      cin >> marks[i][j];
      sum += marks[i][j];
    }

    scores[i] = sum;
    studentAvg[i] = (double)sum / SUBJECTS;
  }

  // Main algorithm combining subproblems
  double classAvg = calculateAverage(scores, n);
  int highest = findHighest(scores, n);

  // ---------- Formatted Result Sheet ----------
  cout << "\n\n================== STUDENT RESULT PORTAL ==================\n";
  cout << left << setw(12) << "Name" << setw(10) << "Total" << setw(10)
       << "Average" << setw(8) << "Grade" << endl;
  cout << "----------------------------------------------------------\n";

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << left << setw(12) << names[i] << setw(10) << scores[i] << setw(10)
         << fixed << setprecision(2) << studentAvg[i] << setw(8)
         << calculateGrade(studentAvg[i]) << endl;
  }

  cout << "==========================================================\n";

  cout << "\nClass Average Score: " << classAvg << endl;

  printBelowAverage(names, scores, n, classAvg);

  cout << "\nHighest Total Score: " << highest << endl;
  printHighestStudents(names, scores, n, highest);

  return 0;
}
/// next level
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
const int SUBJECTS = 5;

string subjects[SUBJECTS] = {"Math", "Physics", "Chemistry", "English", "CS"};

// ---------- Utility Functions ----------
char grade(double avg) {
  if (avg >= 85)
    return 'A';
  else if (avg >= 70)
    return 'B';
  else if (avg >= 55)
    return 'C';
  else if (avg >= 40)
    return 'D';
  else
    return 'F';
}

string status(double avg) {
  if (avg >= 40)
    return "PASS";
  return "FAIL";
}

// ---------- Subproblem A ----------
double classAverage(int total[], int n) {
  int sum = 0;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    sum += total[i];
  return (double)sum / n;
}

// ---------- Subproblem B ----------
void belowAverage(string names[], int total[], int n, double avg) {
  cout << "\nStudents Below Average:\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    if (total[i] < avg)
      cout << names[i] << endl;
}

// ---------- Subproblem C ----------
int highestScore(int total[], int n) {
  int max = total[0];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i < n; i++)
    if (total[i] > max)
      max = total[i];
  return max;
}

// ---------- Subproblem D ----------
void highestStudents(string names[], int total[], int n, int high) {
  cout << "\nTop Scorers:\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    if (total[i] == high)
      cout << names[i] << endl;
}

// ---------- Subject Wise Topper ----------
void subjectTopper(string names[], int marks[][SUBJECTS], int n) {
  cout << "\nSubject Wise Toppers:\n";
  for (int s = 0; s < SUBJECTS; s++) {
    int max = marks[0][s], idx = 0;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 1; i < n; i++)
      if (marks[i][s] > max) {
        max = marks[i][s];
        idx = i;
      }
    cout << subjects[s] << ": " << names[idx] << " (" << max << ")\n";
  }
}

// ---------- Search Student ----------
void searchStudent(string names[], int total[], double avg[], int n) {
  string key;
  cout << "\nEnter name to search: ";
  cin >> key;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (names[i] == key) {
      cout << "\nRecord Found\n";
      cout << "Total: " << total[i];
      cout << "\nAverage: " << avg[i];
      cout << "\nGrade: " << grade(avg[i]);
      cout << "\nStatus: " << status(avg[i]) << endl;
      return;
    }
  }
  cout << "Student Not Found\n";
}

// ---------- Main ----------
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  string names[MAX];
  int marks[MAX][SUBJECTS];
  int total[MAX];
  double avg[MAX];

  cout << "Enter number of students: ";
  cin >> n;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "\nStudent " << i + 1 << " Name: ";
    cin >> names[i];

    total[i] = 0;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = 0; j < SUBJECTS; j++) {
      cout << "Enter " << subjects[j] << " marks: ";
      cin >> marks[i][j];
      total[i] += marks[i][j];
    }
    avg[i] = (double)total[i] / SUBJECTS;
  }

  int choice;
  do {
    cout << "\n\n========== STUDENT RESULT PORTAL ==========\n";
    cout << "1. Display All Results\n";
    cout << "2. Class Average\n";
    cout << "3. Below Average Students\n";
    cout << "4. Highest Score Students\n";
    cout << "5. Subject Wise Topper\n";
    cout << "6. Search Student\n";
    cout << "7. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
      cout << "\n------------------------------------------------\n";
      cout << left << setw(10) << "Name" << setw(8) << "Total" << setw(8)
           << "Avg" << setw(6) << "Grade" << setw(8) << "Status" << endl;
      cout << "------------------------------------------------\n";
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n; i++) {
        cout << left << setw(10) << names[i] << setw(8) << total[i] << setw(8)
             << fixed << setprecision(2) << avg[i] << setw(6) << grade(avg[i])
             << setw(8) << status(avg[i]) << endl;
      }
    } else if (choice == 2)
      cout << "\nClass Average: " << classAverage(total, n) << endl;

    else if (choice == 3)
      belowAverage(names, total, n, classAverage(total, n));

    else if (choice == 4)
      highestStudents(names, total, n, highestScore(total, n));

    else if (choice == 5)
      subjectTopper(names, marks, n);

    else if (choice == 6)
      searchStudent(names, total, avg, n);

  } while (choice != 7);

  cout << "\nSystem Closed Successfully.\n";
  return 0;
}
/////next level
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
const int SUBJECTS = 5;

string subjects[SUBJECTS] = {"Math", "Physics", "Chemistry", "English", "CS"};

// ---------- Utility Functions ----------
char grade(double avg) {
  if (avg >= 85)
    return 'A';
  else if (avg >= 70)
    return 'B';
  else if (avg >= 55)
    return 'C';
  else if (avg >= 40)
    return 'D';
  else
    return 'F';
}

string status(double avg) {
  if (avg >= 40)
    return "PASS";
  return "FAIL";
}

// ---------- Subproblem A ----------
double classAverage(int total[], int n) {
  int sum = 0;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    sum += total[i];
  return (double)sum / n;
}

// ---------- Subproblem B ----------
void belowAverage(string names[], int total[], int n, double avg) {
  cout << "\nStudents Below Average:\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    if (total[i] < avg)
      cout << names[i] << endl;
}

// ---------- Subproblem C ----------
int highestScore(int total[], int n) {
  int max = total[0];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 1; i < n; i++)
    if (total[i] > max)
      max = total[i];
  return max;
}

// ---------- Subproblem D ----------
void highestStudents(string names[], int total[], int n, int high) {
  cout << "\nTop Scorers:\n";
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++)
    if (total[i] == high)
      cout << names[i] << endl;
}

// ---------- Subject Wise Topper ----------
void subjectTopper(string names[], int marks[][SUBJECTS], int n) {
  cout << "\nSubject Wise Toppers:\n";
  for (int s = 0; s < SUBJECTS; s++) {
    int max = marks[0][s], idx = 0;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 1; i < n; i++)
      if (marks[i][s] > max) {
        max = marks[i][s];
        idx = i;
      }
    cout << subjects[s] << ": " << names[idx] << " (" << max << ")\n";
  }
}

// ---------- Search Student ----------
void searchStudent(string names[], int total[], double avg[], int n) {
  string key;
  cout << "\nEnter name to search: ";
  cin >> key;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (names[i] == key) {
      cout << "\nRecord Found\n";
      cout << "Total: " << total[i];
      cout << "\nAverage: " << avg[i];
      cout << "\nGrade: " << grade(avg[i]);
      cout << "\nStatus: " << status(avg[i]) << endl;
      return;
    }
  }
  cout << "Student Not Found\n";
}

// ---------- Main ----------
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  string names[MAX];
  int marks[MAX][SUBJECTS];
  int total[MAX];
  double avg[MAX];

  cout << "Enter number of students: ";
  cin >> n;

  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "\nStudent " << i + 1 << " Name: ";
    cin >> names[i];

    total[i] = 0;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int j = 0; j < SUBJECTS; j++) {
      cout << "Enter " << subjects[j] << " marks: ";
      cin >> marks[i][j];
      total[i] += marks[i][j];
    }
    avg[i] = (double)total[i] / SUBJECTS;
  }

  int choice;
  do {
    cout << "\n\n========== STUDENT RESULT PORTAL ==========\n";
    cout << "1. Display All Results\n";
    cout << "2. Class Average\n";
    cout << "3. Below Average Students\n";
    cout << "4. Highest Score Students\n";
    cout << "5. Subject Wise Topper\n";
    cout << "6. Search Student\n";
    cout << "7. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
      cout << "\n------------------------------------------------\n";
      cout << left << setw(10) << "Name" << setw(8) << "Total" << setw(8)
           << "Avg" << setw(6) << "Grade" << setw(8) << "Status" << endl;
      cout << "------------------------------------------------\n";
      /*
       * Loop Block
       * Iterates through the array/matrix elements to perform operations.
       */
      for (int i = 0; i < n; i++) {
        cout << left << setw(10) << names[i] << setw(8) << total[i] << setw(8)
             << fixed << setprecision(2) << avg[i] << setw(6) << grade(avg[i])
             << setw(8) << status(avg[i]) << endl;
      }
    } else if (choice == 2)
      cout << "\nClass Average: " << classAverage(total, n) << endl;

    else if (choice == 3)
      belowAverage(names, total, n, classAverage(total, n));

    else if (choice == 4)
      highestStudents(names, total, n, highestScore(total, n));

    else if (choice == 5)
      subjectTopper(names, marks, n);

    else if (choice == 6)
      searchStudent(names, total, avg, n);

  } while (choice != 7);

  cout << "\nSystem Closed Successfully.\n";
  return 0;
}
// next level
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

const int SUBJECTS = 5;
string subjects[SUBJECTS] = {"Math", "Physics", "Chemistry", "English", "CS"};

class Student {
private:
  string name;
  int marks[SUBJECTS];
  int total;
  double average;
  char grade;

public:
  void input() {
    cout << "Enter Student Name: ";
    cin >> name;

    total = 0;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < SUBJECTS; i++) {
      cout << "Enter " << subjects[i] << " marks: ";
      cin >> marks[i];
      total += marks[i];
    }

    average = (double)total / SUBJECTS;
    calculateGrade();
  }

  void calculateGrade() {
    if (average >= 85)
      grade = 'A';
    else if (average >= 70)
      grade = 'B';
    else if (average >= 55)
      grade = 'C';
    else if (average >= 40)
      grade = 'D';
    else
      grade = 'F';
  }

  void display() {
    cout << left << setw(12) << name << setw(8) << total << setw(10) << fixed
         << setprecision(2) << average << setw(6) << grade << setw(8)
         << (average >= 40 ? "PASS" : "FAIL") << endl;
  }

  string getName() { return name; }
  int getTotal() { return total; }
  double getAverage() { return average; }
  char getGrade() { return grade; }

  void saveToFile(ofstream &out) {
    out << name << " ";
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < SUBJECTS; i++)
      out << marks[i] << " ";
    out << total << " " << average << " " << grade << endl;
  }

  void loadFromFile(ifstream &in) {
    in >> name;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < SUBJECTS; i++)
      in >> marks[i];
    in >> total >> average >> grade;
  }
};

class Portal {
private:
  Student students[100];
  int n;

public:
  Portal() { n = 0; }

  void addStudent() {
    students[n].input();
    n++;
  }

  void displayAll() {
    cout << "\n------------------------------------------------\n";
    cout << left << setw(12) << "Name" << setw(8) << "Total" << setw(10)
         << "Average" << setw(6) << "Grade" << setw(8) << "Status" << endl;
    cout << "------------------------------------------------\n";

    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < n; i++)
      students[i].display();
  }

  void searchStudent() {
    string key;
    cout << "Enter name to search: ";
    cin >> key;

    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < n; i++) {
      if (students[i].getName() == key) {
        cout << "\nRecord Found:\n";
        students[i].display();
        return;
      }
    }
    cout << "Student not found!\n";
  }

  void topper() {
    int max = students[0].getTotal();
    int idx = 0;

    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 1; i < n; i++)
      if (students[i].getTotal() > max) {
        max = students[i].getTotal();
        idx = i;
      }

    cout << "\nTopper:\n";
    students[idx].display();
  }

  void saveData() {
    ofstream out("students.txt");
    out << n << endl;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < n; i++)
      students[i].saveToFile(out);
    out.close();
    cout << "Data saved successfully.\n";
  }

  void loadData() {
    ifstream in("students.txt");
    if (!in) {
      cout << "No file found.\n";
      return;
    }

    in >> n;
    /*
     * Loop Block
     * Iterates through the array/matrix elements to perform operations.
     */
    for (int i = 0; i < n; i++)
      students[i].loadFromFile(in);

    in.close();
    cout << "Data loaded successfully.\n";
  }

  void menu() {
    int choice;
    do {
      cout << "\n========= UNIVERSITY RESULT PORTAL =========\n";
      cout << "1. Add Student\n";
      cout << "2. Display All Students\n";
      cout << "3. Search Student\n";
      cout << "4. Topper\n";
      cout << "5. Save Data\n";
      cout << "6. Load Data\n";
      cout << "7. Exit\n";
      cout << "Enter choice: ";
      cin >> choice;

      if (choice == 1)
        addStudent();
      else if (choice == 2)
        displayAll();
      else if (choice == 3)
        searchStudent();
      else if (choice == 4)
        topper();
      else if (choice == 5)
        saveData();
      else if (choice == 6)
        loadData();

    } while (choice != 7);
  }
};

/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  Portal portal;
  portal.menu();
  return 0;
}

#include <iostream>
#include <string>
using namespace std;
double average(int n, int marks[]) {
  int sum = 0;
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    sum += marks[i];
  }
  double avg = sum / n;
  return avg;
}
void belowAverage(int marks[], int n, string names[],
                  double calculate_average) {
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (calculate_average > marks[i]) {
      cout << names[i] << endl;
    }
  }
}
void highestScore(int marks[], int n) {
  int max = marks[0];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (marks[i] > max) {
      max = marks[i];
    }
  }
  cout << "Highest Marks: " << max << endl;
}
void studentWithHighestScore(int marks[], string names[], int n,
                             highestScore()) {
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    if (marks == max) {
      cout << names[i] << endl;
    }
  }
}
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int n;
  cout << "Enter no of students: ";
  /* Getting user input and storing it */
  cin >> n;
  int marks[n];
  string names[n];
  /*
   * Loop Block
   * Iterates through the array/matrix elements to perform operations.
   */
  for (int i = 0; i < n; i++) {
    cout << "Enter name of student " << i + 1 << " : ";
    /* Getting user input and storing it */
    cin >> names[i];
    cout << "Enter marks of " << names[i] << " : ";
    /* Getting user input and storing it */
    cin >> marks[i];
  }
  double calculate_average = average(n, marks);
  p cout << "The average is " << calculate_average << endl;
  cout << "Students Below Average: " << endl;
  belowAverage(marks, n, names, calculate_average);
  highestScore(marks, n);

  return 0;
}