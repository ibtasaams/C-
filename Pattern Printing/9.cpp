///Write a program to print the number and alphabet triangle
// 1 
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no of rows: ";
    cin >> n;
    char ch;
    for(int i=1; i<=n; i++){
        int char_num =65;
        for (int j=1; j<=i; j++){
            if(i%2!=0){
                cout << j << " ";
            }else{
                ch = static_cast<char>(char_num);
                cout << ch << " ";
                char_num++;
            
            }
        }
        cout << endl;
    }
    return 0;
}