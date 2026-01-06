////Write a program to print the no changing pattern
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    int k=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            k++;
            cout << k <<" ";
        }
        cout << endl;
    }
    return 0;
}