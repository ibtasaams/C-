///Write a program to count the digits of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number";
    cin >> n;
    int count = 0, remainder;
    while(remainder <= 0){
        remainder = n%10;
        n = n/10;
        count +=1;
    }
    cout << count;
    return 0;
}