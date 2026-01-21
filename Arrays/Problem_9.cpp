/*Find the total number of pairs in the array whose sum is equal to the given 
value x*/
#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter x: ";
    cin >> x;
    int arr[6] = {1,3,5,6,8,9};
    for(int i=0; i<6; i++){
        for(int j=i+1; i<6; i++){
            cout << "(" << arr[i] << "," << arr[j] << ")";
        }
    }
    return 0;
}
