////Write a program using for loop to print the harmonic series to n terms
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of terms: ";
    cin >> n;
    for (int i=1 ; i<=n; i++){
        cout << "1/"<<i ;
        if(i<n){
            cout << " +";
        }
    }
    return 0;
}