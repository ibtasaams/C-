/// Write a program to convert length from inches to feets
// 1 feet = 12 inches
// 1inch = 1/12feet
#include <iostream>
using namespace std;
int main(){
    float length_inches, length_feet,remainder;
    cout << "Enter the length in inches: ";
    cin >> length_inches;
    length_feet = static_cast<int>(length_inches/12);
    cout << length_feet;
}
///--------------------------------------------Copyrights--Ibtasaam Abbasi-------------------------------------------
