////Write a program to print the product of the array
#include <iostream>
using namespace std;
int main(){
    int n, product = 1;
    cout << "Enter the no of elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter element no " << i+1 << ": ";
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        product *= arr[i];
        
    }

    cout << "The product is " << product;
    return 0;
}