///Write a program to print the inverted right triangle pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}