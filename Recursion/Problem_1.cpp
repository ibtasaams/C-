///Write a program to print n times "Good Morning " using recursion
#include <iostream>
using namespace std;
int greet(int n){
    if (n==0) return 1;
    cout << "Good Morning \n";
    return greet(n-1);
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    greet(n);
    return 0;
}