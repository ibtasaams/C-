///Write a program to sum all even numbers from 1 to n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the nth number: ";
    cin >> n;
    int sum =0;
    for(int i=1; i<=n; i++){
        if(n%2==0){
            sum = sum + i;
        }
    }
    cout << sum ;
    return 0;
}