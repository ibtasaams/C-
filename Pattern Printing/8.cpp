///Write a program to print the A-B pattern triangle
// A 
// A B
// A B C
// A B C D
// A B C D E
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of lines: ";
    cin >> n;
    char ch;
    for(int i=1; i<=n; i++){
        int char_num = 65;
        ch = static_cast<char>(char_num);
        for(int j=1; j<=i; j++){
            cout << ch << " " ;
            ch++;
        }
        cout << endl;
    }
    return 0;
}