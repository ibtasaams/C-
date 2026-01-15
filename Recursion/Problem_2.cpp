////Write a program to print n to 1 using recursion
#include <iostream>
using namespace std;
int decreasing(int n){
    if (n==0) return 1;
    cout << n << endl;
    return decreasing(n-1);

}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    decreasing(n);
    return 0;
}