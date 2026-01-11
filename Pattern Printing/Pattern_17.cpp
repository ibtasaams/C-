////Write a program to print the inverted pyramid pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int k=n; k>=i; k--){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}