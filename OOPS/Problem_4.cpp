#include <iostream>
using namespace std;
class Students{
public: 
    string name;
    float marks;
    int rollNo;
    float cgpa;
    
};

int main(){
    int n;
    cout << "Enter no of students: ";
    cin >> n;
    Students student[n];
    for(int i=0; i<n; i++){
        cout << "Enter the details of student " << i+1 << " : " << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, student[i].name);
        cout << "Cgpa: ";
        cin >> student[i].cgpa;
        cout << "Roll No: ";
        cin >> student[i].rollNo;
        cout << "Marks: ";
        cin >> student[i].marks;
    }
     cout << "\n--- Student List ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << student[i].name << endl;
        cout << "Roll No: " << student[i].rollNo << endl;
        cout << "CGPA: " << student[i].cgpa << endl;
    }

    return 0;
}