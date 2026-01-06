///Write a program to print the left pyramid pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of lines: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=n-1; j==0; j--){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}