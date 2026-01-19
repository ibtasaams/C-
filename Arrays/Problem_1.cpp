////Take input from the user as its marks and then store the marks in it 
/// Now if the marks are less than 35 print the rollNo of studnet
/// Roll No here refers to the index of array
///continuos memory allocations
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no of students: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter the marks of student "<< i+1 << ": ";
        cin >> arr[i];
    }
    for(int j=0; j<n; j++){
        if(arr[j]<35){
            cout << "The roll No is: " << j+1 << endl;
        }
    }
    return 0;
}