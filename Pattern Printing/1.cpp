////Write a program to print the square pattern in cpp
// * * * * 
// * * * *
// * * * *
// * * * *
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}