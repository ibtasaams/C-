///Write a program to find the maximum number in an array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }
    int max= arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "The maximum element is " << max;
    
    return 0;
}