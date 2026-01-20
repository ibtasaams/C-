////Write a program to find the sum of elements fo array
#include <iostream>
using namespace std;
int main(){
    int n, sum =0;
    cout << "Enter the no of elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter element no " << i+1 << ": ";
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << "The sum is " << sum;
    return 0;
}