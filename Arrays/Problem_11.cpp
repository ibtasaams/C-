/////Write a program to reverse an array using two pointer approach
#include <iostream>
using namespace std;
void reverse_array(int arr[], int n){
    int start = 0, end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n;
    cout << "Enter the no of elements of array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter the element " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << "Before Reversing\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nAfter Reversing\n";
    reverse_array(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}