///Write  a program to find the sum of first and last digit of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int remainder, reverse =0, first_digit, last_digit, sum;
    last_digit = n % 10;
    while(n>0){
        remainder = n % 10;
        reverse = (reverse*10) + remainder;
        n = n/10;
    }
    first_digit = reverse % 10;
    sum = first_digit + last_digit;
    cout << "The sum of " << first_digit << "and " << last_digit << " is " << sum ;
    return 0;
}
