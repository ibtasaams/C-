////Write a program to find the first and last digit of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int remainder, reverse =0, first_digit, last_digit;
    last_digit = n % 10;
    while(n>0){
        remainder = n % 10;
        reverse = (reverse * 10)+ remainder;
        n = n/10;
    }
    first_digit = reverse%10;
    cout <<"First Digit: "<< first_digit << endl;
    cout << "Last Digit: " <<last_digit;
    return 0;
}