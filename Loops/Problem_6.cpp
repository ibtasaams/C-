//Write a C program to find sum of all natural numbers between 1 to n.
///Method 1.
#include <iostream> 
using namespace std;
int main(){
    int n;
    cout << "Enter the nth number: ";
    cin >> n;
    cout << (n*(n+1))/2;
    return 0;
}
///Method 2.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ente the nth term: ";
    cin >> n;
    int sum =0; 
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout << sum ;
}