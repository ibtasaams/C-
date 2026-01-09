////Write a program to print the inverted hollow triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            if(i==1 || i==n|| j==n|| j==i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}