///Write a program in cpp using for loop to print the fibonnaci series
///0 1 1 2 3 5 8 13 ........ to n terms
#include <iostream>
using namespace std;
int main(){
    int n, firstNum =0, temp = 0, secondNum = 1;
    cout <<"Enter the no of terms: ";
    cin>> n;
    for (int i=1; i<=n; i++){
        cout << firstNum << ",";
        cout << secondNum << ",";
        temp = firstNum + secondNum;
        firstNum = temp;
        secondNum = firstNum + secondNum;
    }
    return 0;
}