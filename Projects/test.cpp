#include <iostream>
#include <string>
using namespace std;
double average(int marks[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += marks[i];
    }
return (double)sum/n;
}
void belowAvg(string name[], int marks[], double avg, int n){
    for(int i=0; i<n; i++){
        if(marks[i] < avg){
            cout << name[i] << " = " << marks[i] << endl;   
        }
    }

}
void highestMarks(string name[], int marks[], int n){
    double highest = marks[0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(marks[i] > highest){
            highest = marks[i];
        }
        }
    }
    cout << highest << endl;
    for(int i=0; i<n; i++){
        if(highest == marks[i]){
            cout << name[i] << endl;
        }
    }
}
int main(){
    int n;
    cout <<"Enter the no of students: ";
    cin >> n;
    string name[n];
    int marks[n];
    for(int i=0; i<n; i++){
        cout << "Enter the name of student " << i+1 << " : ";
        cin >> name[i];
        cout << "Enter the marks of " << name[i] << " : ";
        cin >> marks[i];
    }
    double avg = average(marks,n);
    cout << "The class average is " << avg << endl;
    cout << "Students Below Average : " << endl ;
    belowAvg(name,marks,avg,n);
    cout << "\n";
    cout << "Highest Marks:";
    highestMarks(name, marks, n);
    return 0;
}