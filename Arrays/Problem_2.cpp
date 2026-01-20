///Write a program to get elements of array from the user
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter element no " << i+1 << ": ";
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}