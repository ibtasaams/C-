///Write a progrm to find the minimum number in an array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Specify the size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter the element no " << i+1 <<": ";
        cin >> arr[i];
    }

    int min = arr[0];
    cout << "The array is [";
    for(int i=0; i<n; i++){
        cout  << arr[i]<< " ";
        if(min>arr[i]){
        min = arr[i];
    }
    }
    cout << "]\nThe minimum element is " << min;
    return 0;
}