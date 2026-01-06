///Write a program to print the A,B,C squar pattern
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E
#include <iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cout << "Enter the no of lines: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        int char_num =65;
        for(int j=1; j<=n; j++){
            char ch = static_cast<char>(char_num);
            char_num++;
            cout << ch << " ";
        }
        cout << endl;
    }
}